libcalculator.so.1.0.1 : add.o subtract.o multiply.o divide.o
		gcc -shared -Wl,-soname,libcarculator.so.1 -o calculator.so.1.0.1 add.o subtract.o multiply.o divide.o
		ln -s libcalculator.so.1.0.1 libcalculator.so.1
		ln -s libcalculator.so.1.0.1 libcalculator.so
add.o : add.c
	gcc -c add.c
subtract.o : subtract.c
	gcc -c subtract.c
multiply.o : multiply.c
	gcc -c multiply.c
divide.o : divide.c
	gcc -c divide.c
clean :
	rm -f libcalculator.so.1.0.1 libcalculator.so.1 libcalculator.so
