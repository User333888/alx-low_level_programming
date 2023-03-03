#include <stdio.h>
#include "main.h"

/**
 * kk
 *
 *
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
		if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] -32;
		continue;
		}
	}
}
