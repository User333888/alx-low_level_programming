#include <stdio.h>

/**
 * main - prints combinations
 * of single digit numbers
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{	putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
