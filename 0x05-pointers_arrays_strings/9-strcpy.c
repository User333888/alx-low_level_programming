#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies a string pointed to by src
 * @dest: pointer to a string
 * @src: pointer to a string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
