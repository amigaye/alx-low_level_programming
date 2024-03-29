#include "main.h"
/**
 * print_times_table - print n times time table
 * @n: number of time tables
 * Return: print n times table
 */
void print_times_table(int n)
{
	int i;
	int j;
	int a;

	if (n == 0)
	{
		_putchar(n + '0');
		_putchar('\n');
	}
	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(0 + '0');
			_putchar(',');
			if (i <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
			for (j = 1; j <= n; j++)
			{
				a = i * j;
				if (j != (n + 1) && j != 1)
				{
					_putchar(',');
					if (a <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (a < 100)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
						_putchar(' ');
				}
				if (a <= 9)
					_putchar(a + '0');
				else if (a < 100)
				{
					_putchar(a / 10 + '0');
					_putchar(a % 10 + '0');
				}
				else
				{
					_putchar(a / 100 + '0');
					_putchar((a % 100) / 10 + '0');
					_putchar((a % 100) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
