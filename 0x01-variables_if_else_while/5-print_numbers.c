#include <stdio.h>

/**
* main - Print all numbers of base 10 starting form 0
*
* Return: 0
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	printf("%i", digit);
	putchar('\n');

	return (0);
}
