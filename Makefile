CXX=g++
CXXFLAGS=-std=c++17 -Wall -fsanitize=address,leak -g
LDFLAGS=-fsanitize=address,leak

.PHONY: all clean

all: l3

Song.o: Song.cpp Song.hpp
	${CXX} ${CXXFLAGS} -c Song.cpp -o Song.o
main.o: main.cpp Song.hpp
	${CXX} ${CXXFLAGS} -c main.cpp -o main.o
l3: main.o Song.o Song.hpp
	${CXX} ${LDFLAGS} main.o Song.o -o l3
clean:
	rm -f *.o l3
