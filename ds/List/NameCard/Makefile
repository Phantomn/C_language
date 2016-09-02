CC = gcc

NameCard_exe : ArrayList.o NameCard.o NameCardListMain.o
	gcc -lm -o NameCard_exe NameCard.o NameCardListMain.o ArrayList.o

ArrayList.o : ArrayList.c ArrayList.h NameCard.h
	gcc -c ArrayList.c

NameCardListMain.o : NameCardListMain.c NameCard.h ArrayList.h
	gcc -c NameCardListMain.c

NameCard.o : NameCard.c NameCard.h ArrayList.h
	gcc -c NameCard.c

clean :
	rm *.o NameCard_exe
