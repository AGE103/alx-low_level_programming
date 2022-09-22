#include <stdio.h>

/**
 * * main - Prints alphabets in lowercase
 * * Return: 0
 * **/

int main(void)
{
		char low, e, q;

		e = 'e';
		q = 'q';

		for (low = 'a'; low <= 'z'; low++)
			{
			if (low != e && low != q)
				putchar(low);
					}

			putchar('\n');

	return (0);
}
