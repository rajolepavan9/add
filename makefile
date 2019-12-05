output: main.o add.o fact.o 
	g++  main.o add.o fact.o  -o output
main.o: main.c
	g++ -c main.c
add.o: add.c add.h
	g++ -c add.c
fact.o: fact.c fact.h
	g++ -c fact.c

