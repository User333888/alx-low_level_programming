#include <stdio.h>
#include "main.h"

/**
 * fizzbuzz - print numbers 1 - 100, print fizz if the number is divisible by 3, print buzz if number is
 * divisible by 5 and fizzbuzz if number is divisible by both 3 and 5
 * Return: 0
 */
int fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
