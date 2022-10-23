makestatic : lib/libcalculator.a 
	cd ..;
	gcc -I./lib -L./lib main.c -lcalculator -o makestatic
add.o : lib/add.c
	cd lib;
	gcc -c add.c
subtract.o : lib/subtract.c
	gcc -c subtract.c
multiply.o : lib/multiply.c
	gcc -c multiply.c
divide.o : lib/divide.c
	gcc -c divide.c
lib/libcalculator.a : lib/add.o lib/subtract.o lib/multiply.o lib/divide.o
	ar rcs lib/libcalculator.a lib/add.o lib/subtract.o lib/multiply.o lib/divide.o
clean : 
	rm -f makestatic lib/libcalculator.a lib/add.o lib/subtract.o lib/multiply.o lib/divide.o
