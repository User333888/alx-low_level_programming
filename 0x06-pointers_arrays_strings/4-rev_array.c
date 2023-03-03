#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array- reverses the contents of an array of integers
 * @a: an array of integers
 * @n: the number of elements in an array
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
