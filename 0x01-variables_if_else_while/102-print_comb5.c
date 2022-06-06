#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int thousands;
	int hundreds;
	int tens;
	int ones;

	for (thousands = 0; thousands <= 9; thousands++)
	{
		for (hundreds = thousands; hundreds <= 9; hundreds++)
		{
			for (tens = thousands; tens <= 9; tens++)
			{
				for (ones = tens + 1; ones <= 9; ones++)
				{
					putchar(thousands + '0');
					putchar(hundreds + '0');
					putchar(' ');
					putchar(tens + '0');
					putchar(ones + '0');

					if (thousands < 8)
					{
						putchar(',');
						putchar(' ');
					}
					if (thousands == 8 && hundreds == 8)
					{
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
