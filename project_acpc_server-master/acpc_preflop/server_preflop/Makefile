CXX = g++
CXXFLAGS = -O3 -Wall

PROGRAMS = dealer example_player

all: $(PROGRAMS)

clean:
	rm -f $(PROGRAMS)


dealer: game.cc game.h evalHandTables rng.cc rng.h dealer.cc net.cc net.h
	$(CXX) $(CXXFLAGS) -o $@ game.cc rng.cc dealer.cc net.cc


example_player: game.cc game.h evalHandTables rng.cc rng.h example_player.cc net.cc net.h
	$(CXX) $(CXXFLAGS) -o $@ game.cc rng.cc example_player.cc net.cc
