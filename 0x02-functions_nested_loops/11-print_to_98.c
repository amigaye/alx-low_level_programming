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

	if (n <=98)
		for (i = n; i <= 98; i++)
		{
			if (i <= -100)
			{
				_putchar('-');
				_putchar(-(i / 100) + '0');
				_putchar(-((i % 100) / 10) + '0');
				_putchar(-((i % 100) % 10) + '0');
				if (i != 98)
					_putchar(',');
				_putchar(' ');
			}
			else if (i < -9)
			{
				_putchar('-');
				_putchar(-(i / 10) + '0');
				_putchar(-(i % 10) + '0');
				if (i != 98)
					_putchar(',');
				_putchar(' ');
			}
			else if (i < 0)
			{
				_putchar('-');
				_putchar(-i + '0');
				if (i != 98)
					_putchar(',');
				_putchar(' ');
			}
			else if (i <= 9)
			{
				_putchar(i + '0');
				if (i != 98)
					_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				if (i != 98)
					_putchar(',');
				_putchar(' ');
			}
		}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
			{
				_putchar(i / 100 + '0');
				_putchar((i % 100) / 10 + '0');
				_putchar((i % 100) % 10 + '0');
				if (i != 98)
					_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i /10 + '0');
				_putchar(i % 10 + '0');
				if (i != 98)
					_putchar(',');
				_putchar(' ');
			}
		}
	}	
	_putchar('\n');
}
