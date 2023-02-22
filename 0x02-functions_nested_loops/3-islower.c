#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - tests whether a value is 
 * lowercase or not
 * Return: Always 0 (SUCCESS)
 */
int main(int argc, const char * argv[])
{
	int letter;

	letter = 'b';

	if (islower(letter)) 
		printf("%c is lowercase\n", letter);
	else
		printf("%c is uppercase\n", letter);

	letter = 'B';
		
		if (islower(letter))
			printf("%c is lowercase\n", letter);
		else
			printf("%c is uppercase\n", letter);
	return (0);
}
