#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverse a string using for loop
 * @s: string value
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char temp;
	int i, start, end, len;

	len = strlen(s);
	start = 0;
	end = len - 1;

	for (i = start; i < end; i++)
	{
		temp = s[i];
		s[i] = s[end];
		s[end] = temp;
		end--;
	}
}

