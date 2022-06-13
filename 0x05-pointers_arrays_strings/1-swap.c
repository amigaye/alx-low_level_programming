#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps values
 * @a: integer value of num 1
 * @b: integer value of num 2
 * return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	
	*a = *b;
	*b = c;
}
