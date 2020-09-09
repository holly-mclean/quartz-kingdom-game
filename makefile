# Final Project
# Author: Holly McLean
# Date: August 2017
# Description: Makefile for final project.

hollygame: main.o menu.o Space.o Courtyard.o Library.o Grounds.o Gardens.o \
	Entryway.o GreatHall.o Win.o Lose.o
	g++ -std=c++11 -g main.o menu.o Space.o Courtyard.o Library.o Grounds.o \
	Gardens.o Entryway.o GreatHall.o Win.o Lose.o -o hollygame

main.o: main.cpp
	g++ -std=c++11 -c -g main.cpp

menu.o: menu.hpp menu.cpp
	g++ -std=c++11 -c -g menu.cpp

Space.o: Space.hpp Space.cpp
	g++ -std=c++11 -c -g Space.cpp

Courtyard.o: Courtyard.hpp Courtyard.cpp
	g++ -std=c++11 -c -g Courtyard.cpp

Library.o: Library.hpp Library.cpp
	g++ -std=c++11 -c -g Library.cpp

Grounds.o: Grounds.hpp Grounds.cpp
	g++ -std=c++11 -c -g Grounds.cpp

Entryway.o: Entryway.hpp Entryway.cpp
	g++ -std=c++11 -c -g Entryway.cpp

GreatHall.o: GreatHall.hpp GreatHall.cpp
	g++ -std=c++11 -c -g GreatHall.cpp

Win.o: Win.hpp Win.cpp
	g++ -std=c++11 -c -g Win.cpp

Lose.o: Lose.hpp Lose.cpp
	g++ -std=c++11 -c -g Lose.cpp

clean:
	rm *.o hollygame
