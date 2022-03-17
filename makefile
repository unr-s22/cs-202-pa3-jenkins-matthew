#Created on 3/15/22
CC=g++
CFLAGS=-c -Wall
pa3:main.cpp Account.o Money.o
	$(CC) main.cpp Account.o Money.o -o pa3
Account.o:Account.cpp Account.h
	$(CC) $(CFLAGS) Account.cpp
Money.o:Money.cpp Money.h
	$(CC) $(CFLAGS) Money.cpp
clean:
	rm -rf *.o pa3 
