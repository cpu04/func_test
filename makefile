file.out : sub.o main.o
	gcc -o file.out sub.o main.o
sub.o : sub.c
	gcc -c -o sub.o sub.c
main.o : main.c
	gcc -c -o main.o main.c
clean :
	rm -rf *.o 