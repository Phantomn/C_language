CC = gcc

ArrayList_exe : ArrayList.o all_ArrayList.o
	gcc -o ArrayList_exe ArrayList.o all_ArrayList.o
ArrayList : ArrayList.c
	gcc -c -o ArrayList.o ArrayList.c
all_ArrayList : all_ArrayList.c
	gcc -c -o all_ArrayList.o all_ArrayList.c
clean :
	rm *.o ArrayList_exe
