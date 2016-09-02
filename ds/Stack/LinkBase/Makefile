CC = gcc

ListBaseStack_exe : ListBaseStack.o ListBaseStackMain.o
	gcc -o ListBaseStack_exe ListBaseStack.o ListBaseStackMain.o
ListBaseStack : ListBaseStack.c
	gcc -c -o ListBaseStack.o ListBaseStack.c
ListBaseStackMain : ListBaseStackMain.c
	gcc -c -o ListBaseStackMain.o ListBaseStackMain.c
clean :
	rm *.o ListBaseStack_exe
