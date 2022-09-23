#include "main.h"

/**
*
*_strcat - concatenates the string pointed to by @src to
*
*the end of the string pointed to by @dest
*@dest: string that will be appended
*
*@src: string to be concatenated upon
*
*Return: return pointer or @dest
*/
void reverse_array(int *a, int n);
{
	int tmp, index;

	for (index = n - 1; index >= / 2; index--)
	{
		tmp =a[n - 1 - index];
		a[n - 1 - idex] = a[index];
		a[index] = tmp;
	}
}
