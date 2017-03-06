CC = gcc

ArrayList_exe : ArrayList.o ListMain.o
	gcc -lm -o ArrayList_exe ArrayList.o ListMain.o
ArrayList.o : ArrayList.c ArrayList.h
	gcc -c ArrayList.c
ListMain.o : ListMain.c ArrayList.h
	gcc -c ListMain.c

clean :
	rm *.o 
