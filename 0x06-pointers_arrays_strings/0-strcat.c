#include "main.h"

/**
 *_strcat- concatenate two strings
 *@dest: char string to concatenate to
 *@src: char string
 *Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';

	return (dest);
}
