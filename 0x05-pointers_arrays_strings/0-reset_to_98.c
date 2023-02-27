#include <stdio.h>
#include "main.h"

/**
 * main - takes a pointer parameter value
 * and updates it to 98
 *
 * Return : Void
 */
void reset_to_98(int *n)
{
	int a = 20;
	int *n;
	n = &a;
	printf("n=%d\n", a);
	*n = 98;
	printf("n=%d\n", a);
}
