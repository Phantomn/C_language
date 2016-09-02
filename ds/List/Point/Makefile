CC = gcc

Point_exe : ArrayList.o PointListMain.o Point.o
	gcc -lm -o Point_exe ArrayList.o PointListMain.o Point.o
ArrayList.o : ArrayList.c ArrayList.h Point.h
	gcc -c ArrayList.c
PointListMain.o : PointListMain.c ArrayList.h Point.h
	gcc -c PointListMain.c
Point.o : Point.c ArrayList.h Point.h
	gcc -c Point.c

clean :
	rm *.o
