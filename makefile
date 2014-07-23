myshell : func.o main.o
	gcc main.o func.o -o myshell
	make clean
main.o : myshell.h main.c
	gcc -c main.c -o main.o
func.o: myshell.h func.c
	gcc -c func.c -o func.o
.PHONY:clean
clean :
	rm main.o func.o
