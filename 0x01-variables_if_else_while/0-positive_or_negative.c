

#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - Assign random number to variable for execution followed by new line
 *
 * Return : Always 0 (Success)
 */


/* betty style doc for function main goes there */

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
		print("%d is negative\n", n);
	}
	return (0);

}
