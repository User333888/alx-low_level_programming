#include <stdio.h>

/**
 * main- prints alphabet in lowercase
 * except letters 'q' and 'e'
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{	
		if (alph != 'e' && alph != 'q')
		{

			putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
