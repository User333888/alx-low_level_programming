#include <stdio.h>

/**
 * main - print all combinations of two digits
 * with specifications
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int i;
	int f;

	for (i = '0'; i <= '9'; i++)
	{
		for (f = i + 1; f <= '9'; f++)
		{
			if (i != f)
			{
				putchar(i);
				putchar(f);

				if (i == '8' && f == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
