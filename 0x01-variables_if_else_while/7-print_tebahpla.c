#include <stdio.h>

/**
 *  main - prints lowercase alphabet
 *  in reverse
 *  Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{	putchar(rev);
	}
	putchar('\n');
	return (0);
}
