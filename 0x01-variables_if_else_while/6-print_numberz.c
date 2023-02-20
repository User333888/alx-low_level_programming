#include <stdio.h>

/**
 * main- prints singles digit numbers
 * of base 10 from 0-9
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{	putchar(num);
	}
	putchar('\n');
	return (0);
}
