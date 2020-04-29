forkpid: forkpid.cpp
	g++ -Wall -std=c++14 -g -pedantic-errors -o forkpid forkpid.cpp

clean:
	/bin/rm p1 *.o