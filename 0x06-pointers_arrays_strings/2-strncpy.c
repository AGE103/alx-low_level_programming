#include "main.h"

/**
*
*_strcat - concatenates the string pointed to by @src to
*
*the end of the string pointed to by @dest
*
*@dest: string that will be appended
*
*@src: string to be concatenated upon
*
*Return: return pointer or @dest
*/

int _strcmp(char *s1, char *s2);
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
