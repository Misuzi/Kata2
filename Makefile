CC=g++
CFLAGS=-Wall

main: main.o numberList.o


clean:
		rm -f main numberList.o main.o
