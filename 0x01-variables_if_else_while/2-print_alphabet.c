#include <stdio.h>

/**
 *  main- uses putchar to print
 *  an array of characters
 *  Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
