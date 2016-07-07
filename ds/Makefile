CC = gcc

ListMain_exe : ArrayList.o ListMain.o
	gcc -o ListMain_exe ArrayList.o ListMain.o
ArrayList : ArrayList.c
	gcc -c -o ArrayList.o ArrayList.c
ListMain : ListMain.c
	gcc -c -o ListMain.o ListMain.c

clean :
	rm *.o ListMain_exe