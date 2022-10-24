#include <stdio.h>
#include <stdlib.h>
#ifdef NDEBUG
#define return void
#endif

int my_assert(int ex)
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
