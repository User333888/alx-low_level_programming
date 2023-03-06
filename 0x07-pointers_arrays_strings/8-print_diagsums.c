#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of main and off 
 * diagonals in a square matrix
 * @a: pointer to an array[n][n]
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int opp = 0;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		opp += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d", sum, opp);
	printf("%d, %d", sum, opp);
}
