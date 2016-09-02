CC = gcc

ArrayBaseStack_exe : ArrayBaseStack.o ArrayBaseStackMain.o
	gcc -o ArrayBaseStack_exe ArrayBaseStack.o ArrayBaseStackMain.o
ArrayBaseStack : ArrayBaseStack.c
	gcc -c -o ArrayBaseStack.o ArrayBaseStack.c
ArrayBaseStackMain : ArrayBaseStackMain.c
	gcc -c -o ArrayBaseStackMain.o ArrayBaseStackMain.c
clean :
	rm *.o ArrayBaseStack_exe
