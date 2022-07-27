#include <stdio.h>
/**
 * main - print the first 50 Fibonacci numbers,
 * starting with 1 and 2
 * Return: print the first 50 Fibonacci numbers
 */
int main(void)
{
	int i;
	double firstNum;
	double secondNum;
	double nextNum;

	firstNum = 1;
	secondNum = 2;
	nextNum = firstNum + secondNum;
	printf("%.0f, %.0f, ", firstNum, secondNum);
	for (i = 3; i <= 98; i++)
	{
		if (i < 98)
			printf("%.0f, ", nextNum);
		else
			printf("%.0f", nextNum);
		firstNum = secondNum;
		secondNum = nextNum;
		nextNum = firstNum + secondNum;
	}
	printf("\n");
	return (0);
}
