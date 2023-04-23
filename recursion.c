#include "main.h"
/*recursively gives us our integer using recursion*/
/**
 * recursion_int - Our recursive function
 *
 * @value: Our values in int for each recusrion
 * Return: returns 0
 */
int recursion_int(int value)
{
	int remain;
	int division;

	if (value == 0)
	{
		_putchar('0');
		return (0);
	}

	remain = value % 10;
	division = value / 10;

	if (division == 0)
	{
		_putchar('0' + remain);
		return (0);
	}
	recursion_int(division);
	_putchar('0' + remain);
	return (0);
}
