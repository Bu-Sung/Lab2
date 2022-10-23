#include <stdio.h>
#include <errno.h>
#include <string.h>
extern int errno;

void new_perror(char str[])
{
	if(str == NULL)
		printf("%s", strerror(errno));
	else
		printf("%s : %s", strerror(errno));
}
