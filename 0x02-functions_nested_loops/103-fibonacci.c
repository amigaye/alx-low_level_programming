#include <stdio.h>
/**
 * main - print the first 50 Fibonacci numbers,
 * starting with 1 and 2
 * Return: print the first 50 Fibonacci numbers
 */
int main(void)
{
	int i;
	long int firstNum;
	long int secondNum;
	long int nextNum;
	long int sum;

	sum = 2;
	firstNum = 1;
	secondNum = 2;
	nextNum = firstNum + secondNum;

	for (i = 3; i <= 50; i++)
	{
		if (i % 2 == 0)
			sum += nextNum;
		firstNum = secondNum;
		secondNum = nextNum;
		nextNum = firstNum + secondNum;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
