#include "main.h"
/*function counting string length and printing characters*/
/**
 * _putstr - Our function
 *
 * @str: pointer to array of characters
 *
 * Return: returns count
 */
int _putstr(char *str)
{
	int count = 0;
	unsigned int los = _strlen(str);
	unsigned int i;

	for (i = 0; i < los; i++)
	{
		write(STDOUT_FILENO, (void *)str, sizeof(*str));
		++str;
		count += 1;
	}
	return (count);
}
