#include <stdio.h>

/**
 * main - positive or negative outcome
 *
 *Description: Print whether n is positive or negative
 * Return: 0
 */

int main(void)
{
	int n;


	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("\%d is positive\n", n);

	return (0);
}
