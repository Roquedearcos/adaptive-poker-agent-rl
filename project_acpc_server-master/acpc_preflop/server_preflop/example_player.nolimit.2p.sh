#!/bin/bash

DIR="$(cd "$(dirname "$0")" && pwd)"

"$DIR/example_player" \
  "$DIR/holdem.nolimit.2p.reverse_blinds.game" \
  "$1" \
  "$2"
