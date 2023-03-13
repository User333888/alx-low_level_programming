#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * natural -computes and prints sum of multiples of 3 and 5
 * under 1024
 */

void natural(void)
{
	int n = 1024;
	int i;
	int k = 0;

	for (i = 0; i < n; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			k = k + i;
	}
	_putchar(k);
}
