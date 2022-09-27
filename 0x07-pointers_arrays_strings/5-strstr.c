#include "main.h"

/**
 *_strchr- a function that locates a char in a string
 *@s: a pointer given by main
 *@c: the char to look for
 *Description: returns the first occurance of the char c in string
 *Return: returns a pointer to the first occurance
 */

char *_strstr(char *haystack, char *needle)

{

	while (*haystack != 0)
	{
		char *a = haystack;

		char *b = needle;

	while (*haystack == *b && *b != 0 && *haystack != 0)
		haystack++, b++;
	if (*b == 0)
		return (a);
	haystack = ++a;
	}
	return (0);
}
