#include "main.h"

/**
 * _printf - prints anything to the standard ouput
 * @format: format to be inputed
 * Return: the number of characters printed
*/

int _printf(const char *const format, ...)
{
	va_list ap;
	int i, n;

	va_start(ap, format);

	i = 0;
	n = 0;
	while (format && format[i])
	{
		if ((format[i] == '%') &&
			(check_valid_identifier(format[i + 1]) != 0))
		{
			n += get_identifier_func(ap, format[i + 1]);
			i++;
		}
		else if ((format[i] == '%') &&
			(check_valid_flag(format[i + 1], format[i + 2]) != 0))
		{
			n += get_flags_func(ap, format[i + 1], format[i + 2]);
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			n++;
		}
		i++;
	}

	va_end(ap);
	return (n);
}
