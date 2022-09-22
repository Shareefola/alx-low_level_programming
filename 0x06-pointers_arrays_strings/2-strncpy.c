#include "main.h"

/**
 *_strncpy - C function that copies a string, including the
 *terminating null byte, using at most an inputted number of bytes.
 *If the length of the source string is less than the maximum byte nom
 *the remainder of the destination string is filled with null bytes.
 *Works identically to the standard library function `strncpy`.
 *@dest: buffer storing the string copy
 *@src:the source string
 *@n:max nummber of byte copied
 *Return: returns 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
