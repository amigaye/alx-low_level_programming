#include <stdio.h>
/**
 * main - print the first 50 Fibonacci numbers,
 * starting with 1 and 2
 * Return: print the first 50 Fibonacci numbers
 */
int main(void)
{
	int i;
	int firstNum;
	int secondNum;
	int nextNum;

	firstNum = 1;
	secondNum = 2;
	nextNum = firstNum + secondNum;
	printf("%d, %d, ", firstNum, secondNum);
	for (i = 0; i < 50; i++)
	{
		if (i < 49)
			printf("%u, ", nextNum);
		else
			printf("%u", nextNum);
		firstNum = secondNum;
		secondNum = nextNum;
		nextNum = firstNum + secondNum;
	}
	printf("\n");
	return (0);
}
