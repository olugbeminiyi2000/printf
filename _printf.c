#include "main.h"
/*printing characters to the standard output*/
/**
 * _printf - Our function to print like printf
 *
 * @format: formatting specifiers or ordinary characters
 * @...: variadic variable
 * Return: returns 0
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list args;

	va_start(args, format);
	for (; *format != '\0'; i++)
	{
		if (*format == '%')
		{
			++format;
			if (*format == 'c')
				count += _putchar(va_arg(args, int));
			else if (*format == 's')
				count += _putstr(va_arg(args, char*));
			else if (*format == 'd')
				count += _putintd(va_arg(args, int), 0);
			else if (*format == 'i')
				count += _putinti(va_arg(args, int), 0);
			else if (*format == '%')
				count += _putpercent(format);
			else
			{
				count += _putpercent(format - 1);
				count += _putpercent(format);
			}
			++format;
		}
		else
		{
			count += _putpercent(format);
			++format;
		}
	}
	va_end(args);
	return (count);
}
