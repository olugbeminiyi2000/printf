#include "main.h"
/*print integers then collects count of int characters*/
/**
 * _putintd - prints integers of signed type d
 *
 * @n: the value of the int
 * @start: start always with 0
 *
 * Return: returns count
 */
int _putintd(int n, int start)
{
	unsigned int n1;
	int count = start;

	n1 = n;
	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
		count += 1;
	}
	if (n1 / 10 != 0)
		count += _putintd(n1 / 10, 0);
	_putchar((n1 % 10) + '0');
	count += 1;
	return (count);
}
