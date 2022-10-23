#include <stdio.h>
#include "testlib.h"

int main()
{
	printf("add(2,5) = %d\n", add(2,5));
	printf("subtract(2,5) = %d\n", subtract(2,5));
	printf("multiply(2,5) = %d\n", multiply(2,5));
	printf("divide(2,5) = %.1f\n", divide(2,5));
}
