all: libconvert.so
	sudo cp `pwd`/libconvert.so /usr/lib
	sudo chmod 0755 /usr/lib/libconvert.so
	sudo ldconfig
	gcc main.c -l convert -o main

libconvert.so: low.o uper.o
	gcc -shared -o libconvert.so low.o uper.o

low.o: low.c header.h
	gcc -fpic -c low.c
	
uper.o: uper.c header.h
	gcc -fpic -c uper.c

clean:
	rm *.o *.so main

clean-all: clean
	sudo rm /usr/lib/libconvert.so
