#include "main.h"
/*prints the character percent for the case percent*/
/**
 * _putpercent - The percent function
 *
 * @pchar: a pointer to a char variable
 * Return: return count value
 */
int _putpercent(const char *pchar)
{
	write(STDOUT_FILENO, (void *)pchar, sizeof(*pchar));
	return (1);
}
