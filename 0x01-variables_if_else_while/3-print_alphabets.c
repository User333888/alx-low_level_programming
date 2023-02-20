#include <stdio.h>

/**
 * main- prints the alphabet in lowercase
 * then in uppercase
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{	 putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{	putchar(CH);
	}
	putchar('\n');
	return (0);
}
