#include "main.h"
/**
 * _abs - returns absolute value of numbers
 * @r: input number as integer
 * Return: absolute value
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
	_putchar ('\n');
}
