CC = g++
CFLAGS = -std=c++17 -O2 -Wall
SRC = main.cpp system.cpp disk.cpp
EXEC = program
all:
	$(CC) $(CFLAGS) $(SRC) -o $(EXEC)