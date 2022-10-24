#include <stdio.h>
#include <stdlib.h>
#include "libassert.c"


void foo(int num)
{
	new_assert(((num>=0) && (num<=100)));
	printf("foo : num = %d\n", num);
}

void main(int argc, char *argv[])
{
	int num;
	
	if(argc < 2)
	{
		fprintf(stderr, "Usage : test_assert aNumber\n(0 <= aNumber <=)\n");
		exit(1);
	}
	
	num = atoi(argv[1]);
	foo(num);
}
