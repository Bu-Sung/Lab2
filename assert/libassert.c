#include <stdio.h>
#include <stdlib.h>
#ifdef NDEBUG
#define return void
#endif

int new_assert(int ex)
{
	if(ex == 0)
	{
		printf("new_assert : error");
		return 0;
	}
	else
	{
		return 1;
	}
}
