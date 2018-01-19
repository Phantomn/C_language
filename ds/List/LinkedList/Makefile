CC = gcc

DLinkedListMain_exe : DLinkedList.o DLinkedListMain.o
	gcc -lm -o DLinkedListMain_exe DLinkedList.o DLinkedListMain.o

DLinkedListMain.o : DLinkedListMain.c DLinkedList.h
	gcc -c DLinkedListMain.c

DLinkedList.o : DLinkedList.c DLinkedList.h
	gcc -c DLinkedList.c

clean :
	rm *.o