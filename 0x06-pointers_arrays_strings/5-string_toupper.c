#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 *
 * return: the new string
 */
char *string_toupper(char *s)
{
	int n;

	n = 0;
	while ( s[n] != '\0')
	{
		if (s[n] >= 'a' && s[n] <= 'z')
			s[n] = s[n] - 32;
			n++;
	}
		return (s);
}

