

#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - assigns random number to variable for execution and then new line
 *
 * Return: Always 0
 */

int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/*Your code goes there */
	if (n > 0)
		printf("%d is positive \n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);

}
