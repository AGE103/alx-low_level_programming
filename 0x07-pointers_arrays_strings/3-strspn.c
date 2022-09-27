#include "main.h"

/**
 *_strchr- a function that locates a char in a string
 *
 *@s: a pointer given by main
 *
 *@c: the char to look for
 *
 *Description: returns the first occurance of the char c in string
 *
 *Return: returns a pointer to the first occurance
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int a;

	unsigned int b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!accept[b])
			break;
	}
	return (a);
}
