#include "main.h"
/*function that get the d-case*/
/**
 * _dcase - the dcase function
 * @d: the parameter d
 *
 * Return: return an int
 */
int _dcase(int d)
{
	if (d < 0)
	{
		d = -d;
		_putchar('-');
	}
	recursion_int(d);
	return (0);
}
