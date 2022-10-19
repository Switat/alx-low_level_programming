#include "main.h"

/**
 *_islower - check for a lowercase character
 *@c: lower case checker
 * Return: 0
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
