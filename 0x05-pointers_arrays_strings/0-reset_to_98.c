#include <stdio.h>
#include "main.h"

/**
 * main - takes a pointer parameter value
 * and updates it to 98
 *
 * Return : Always 0
 */
int main(void)
{
	int n;
	int *p;
	
	n = 402;
	p = &n;
	printf("n=%d\n", n);
	*p = 98;
	printf("n=%d\n", n);
	return (0);
}
