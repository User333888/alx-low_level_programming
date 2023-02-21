#include <stdio.h>

/**
 * main- prints lowercase alphabet x10
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar("\n");
	}
	return (0);
}
