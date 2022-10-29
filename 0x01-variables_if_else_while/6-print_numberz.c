#include <stdio.h>

/**
* main - Print base 10 number starting from 0 with only putchar
*
* Return: 0
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit + '0');

	putchar('\n');

	return (0);
}
