#include "main.h"
/**
 * jack_bauer - print every minutes
 * @thousand - thousand digit
 * @hundred - hundred digit
 * @ten - ten digit
 * @one - one digit
 * Return: every minutes within 24 hours
 */
void jack_bauer(void)
{
	int thousand;
	int hundred;
	int ten;
	int one;

	for (thousand = 0; thousand <= 2; thousand++)
	{
		for (hundred = 0; hundred <= 3; hundred++)
		{
			for (ten = 0; ten <= 5; ten++)
			{
				for (one = 0; one <= 9; one++)
				{
					_putchar(thousand + '0');
					_putchar(hundred + '0');
					_putchar(':');
					_putchar(ten + '0');
					_putchar(one + '0');
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
