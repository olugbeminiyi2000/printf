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
	unsigned int length = strlen(format);
	unsigned int i;
	va_list args;

	va_start(args, format);
	for (i = 0; i < length; i++)
	{
		char result;
		int posnegNum;
		int negposNum;
		char *str;
		unsigned int str_len;
		char *str_malloc;

		if (*format == '%')
		{
			++format;
			switch (*format)
			{
				case 'd':
					posnegNum = va_arg(args, int);
					if (posnegNum < 0)
					{
						posnegNum = -posnegNum;
						_putchar('-');
					}
					recursion_int(posnegNum);
					break;
				case 'i':
					negposNum = va_arg(args, int);
					if (negposNum < 0)
					{
						negposNum = -negposNum;
						_putchar('-');
					}
					recursion_int(negposNum);
					break;
				case 'c':
					result = va_arg(args, int);
					_putchar(result);
					break;
				case 's':
					str = va_arg(args, char*);
					str_len = strlen(str);
					str_malloc = malloc((str_len + 1) * sizeof(char));
					strncpy(str_malloc, str, str_len);
					str_malloc[str_len] = '\0';
					write(STDOUT_FILENO, (void *)str_malloc,
							str_len + 1);
					free(str_malloc);
					break;
				default:
					break;
			}
			++format;
		}
		else
		{
			write(STDOUT_FILENO, (void *)format, sizeof(*format));
			++format;
		}
	}
	va_end(args);
	return (0);
}
