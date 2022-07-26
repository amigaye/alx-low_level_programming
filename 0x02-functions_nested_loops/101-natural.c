#include <stdio.h>
/**
 * main - return multiple 3 and 5
 * Return: print multiple of 3 & 5 below 1024
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
