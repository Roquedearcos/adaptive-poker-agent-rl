/*
Copyright (C) 2011 by the Computer Poker Research Group, University of Alberta
*/

#ifndef _NET_H
#define _NET_H

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdint.h>
#include <inttypes.h>

#define READBUF_LEN 4096
#define NUM_PORT_CREATION_ATTEMPTS 10

namespace project_acpc_server {

/* buffered I/O on file descriptors */
typedef struct {
  int fd;
  int bufStart;
  int bufEnd;
  char buf[ READBUF_LEN ];
} ReadBuf;

/* socket helpers */
int connectTo( char *hostname, uint16_t port );
int getListenSocket( uint16_t *desiredPort );

/* buffered I/O helpers */
ReadBuf *createReadBuf( int fd );
void destroyReadBuf( ReadBuf *readBuf );
ssize_t getLine( ReadBuf *readBuf,
                 size_t maxLen,
                 char *line,
                 int64_t timeoutMicros );

} // namespace project_acpc_server

#endif // _NET_H
