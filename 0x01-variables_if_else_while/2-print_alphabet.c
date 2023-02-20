#include <stdio.h>

/**
 *  main- uses putchar to print
 *  an array of characters
 *  Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
