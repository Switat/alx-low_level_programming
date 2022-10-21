#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: 0
 */


int main(void)
{
	long int x = 612852475143;
	long int zy;

	for (zy = 2; zy < x; zy++)
	{
		if (x % zy == 0)
		{
			x = x / zy;
		}
	}
	printf("%ld\n", zy);
	return (0);
}
