#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print n to 98
 * @n: starting number
 * Return: print numer from n to 98
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d%c%c", i, ',', ' ');
			else
				printf("%d\n", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >=  98; i--)
		{
			if (i != 98)
				printf("%d%c%c", i, ',', ' ');
			else
				printf("%d\n", i);
		}
	}
	else
		printf("%d\n", n);
}
