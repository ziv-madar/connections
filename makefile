all: main

main: main.o libmy_mat.a
	gcc -wall -g -o $@ main.o libmy_mat.a



libmy_mat.a: my_mat.o
	ar -rcs $@ my_mat.o

my_mat.o: my_mat.c my_mat.h
	gcc -wall -g -c my_mat.c

main.o: main.c my_mat.h
	gcc -wall -g -c main.c
