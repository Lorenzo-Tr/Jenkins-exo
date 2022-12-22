all: main.c

main.o: main.c
	gcc -c main.c -o main.o

addition.o: add.c add.o
	gcc -c addition.c -o addition.o

test: main.c
	@gcc -c main.c -o  test.o
	@gcc -o test test.o addition.o
	@./test
	@rm test test.o
