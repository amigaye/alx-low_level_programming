#include "main.h"
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

	firstNum = 1;
	secondNum = 2;
	nextNum = firstNum + secondNum;
	printf("%ld, %ld, ", firstNum, secondNum);
	for (i = 3; i <= 50; i++)
	{
		if (i < 50)
			printf("%ld, ", nextNum);
		else
			printf("%ld", nextNum);
		firstNum = secondNum;
		secondNum = nextNum;
		nextNum = firstNum + secondNum;
	}
	printf("\n");
	return (0);
}
