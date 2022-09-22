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
**Return: return pointer or @dest
*/

int _strcmp(char *s1, char *s2);
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
