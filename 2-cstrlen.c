#include "main.h"
/*Write a function that returns the length of a string.*/
/**
 * _strlen - Our function we are building
 *
 * @s: our character parameter s
 * Return: returns nothing or void
 */
int _cstrlen(const char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
