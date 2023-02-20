#include <stdio.h>

/**
 * main - prints all numbers
 * of base 16
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char hex;
	char hex0;

	for (hex = '0'; hex <= '9'; hex++)
	{	putchar(hex);
	}
	for (hex0 = 'a'; hex0 <= 'f'; hex0++)
	{	putchar(hex0);
	}
	putchar('\n');
	return (0);
}
