all: program

as.o: as.s
	as -o as.o as.s

code.o: code.c
	gcc -c -o code.o code.c

program: code.o as.o
	gcc -o program code.o as.o

run: program
	./program

clean:
	rm -f as.o code.o program
