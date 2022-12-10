#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - if number is positive, negative or zero
 *
 * return = 0
 */

int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%p is positive\n", n);
	}
	else if (n ==0)
	{
		printf("%p is zero\n", n)
	}
	else
	{
		printf("%p is negative\n", n);
	}
	return (0);
}
