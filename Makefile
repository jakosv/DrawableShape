CC=g++
CFLAGS=-std=c++17
SOURCES=main.cpp Shape.cpp Square.cpp Circle.cpp
EXECUTABLE=main
all:
	$(CC) $(SOURCES) -o $(EXECUTABLE) $(CFLAGS)
