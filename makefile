all: test

test: test.o fs.o
	gcc -o test test.o fs.o

test.o: test.c fs.h
	gcc -c test.c 

fs.o: fs.c fs.h
	gcc -c fs.c

clean:
	rm -rf fs_data
	rm -f *.o
	rm -rf test