#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: int parameter
 * Return: 1 if the number is greater than zero
 * -1 if the number is less than zero and
 *  0 if the number is equal to o
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
	else
	{
		_putchar (48);
		return (0);
	}
	_putchar ('\n');
}
