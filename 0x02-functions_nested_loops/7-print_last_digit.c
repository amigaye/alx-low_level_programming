#include "main.h"
/**
 * print_last_digit - print the last digit of given number
 * @d:input number
 * Return: last digit
 */
int print_last_digit(int d)
{
	int lastDigit;
	lastDigit = d % 10;
	if (lastDigit > 0)
	{
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		_putchar (-lastDigit + '0');
		return (-lastDigit);
	}
}
