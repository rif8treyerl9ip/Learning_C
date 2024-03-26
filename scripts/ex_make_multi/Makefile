CXX=g++

CXXFLAGS=-std=c++11

all: program

program: main.o greeting.o
	$(CXX) $(CXXFLAGS) -o program main.o greeting.o

main.o: main.cpp greeting.h
	$(CXX) $(CXXFLAGS) -c main.cpp

greeting.o: greeting.cpp greeting.h
	$(CXX) $(CXXFLAGS) -c greeting.cpp

clean:
	rm -f program main.o greeting.o
