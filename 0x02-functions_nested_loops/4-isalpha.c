#include "main.h"
#include <ctype.h>
/**
 * _isalpha - identify alphabets
 * @c: parameter
 * Return: 1 if isalpha or 0 if not
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
	_putchar('\n');
}
