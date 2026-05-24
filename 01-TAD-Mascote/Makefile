CC = gcc
CFLAGS = -Wall -g


all: main.o mascote.o
	$(CC) $(CFLAGS) -o app_mascote main.o mascote.o


main.o: main.c mascote.h
	$(CC) $(CFLAGS) -c main.c


mascote.o: mascote.c mascote.h
	$(CC) $(CFLAGS) -c mascote.c

clean:
	rm -rf *.o app_mascote *~