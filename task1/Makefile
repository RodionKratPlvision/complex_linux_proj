all: libcalc.a
	gcc main.c -L . -l calc -lm -o main

libcalc.a: difference.o  factorial.o  fraction.o  product.o  square_root.o  sum.o 
	ar -rc libcalc.a difference.o  factorial.o  fraction.o  product.o  square_root.o  sum.o
	ranlib libcalc.a

difference.o: header.h difference.c
	gcc -c difference.c

factorial.o: header.h factorial.c
	gcc -c factorial.c

fraction.o: header.h fraction.c
	gcc -c fraction.c

product.o: header.h product.c
	gcc -c product.c	

square_root.o: header.h square_root.c
	gcc -c square_root.c

sum.o: header.h sum.c
	gcc -c sum.c

clean:
	rm main *.o *.a
