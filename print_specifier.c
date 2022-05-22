#include "main.h"

/**
 * print_conv_specifier - prints conversion specifier
 * @a: argument list
 * Return: number of characters printed
*/

int print_conv_specifier(va_list a)
{
	char *s = va_arg(a, char *);
	char alph[] = "ABCDEF";
	int i = 0, x = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 0 && s[i] < 32) || (s[i] >= 127))
		{
			x = s[i];
			_putchar('\\');
			_putchar('x');
			count += 2;

			if (x <= 15)
			{
				_putchar(48);
				count += (print_hexadecimal(x, alph) + 1);
			}
		}
		else
		{
			_putchar(s[i]);
			count++;
		}

		i++;
	}
	return (count);
}

/**
 * handle_plus - handles the plus flag
 * @a: argument list
 * Return: count of characters printed
*/

int handle_plus(va_list a)
{
	int x = va_arg(a, int);
	int y = count(x, 10);

	if (x > 0)
	{
		_putchar('+');
		print_number(x, 10);
		return (y + 1);
	}
	print_number(x, 10);
	return (y);
}

/**
 * handle_space - handles the space flag
 * @a: argument list
 * Return: count of characters printed
*/
int handle_space(va_list a)
{
	int x = va_arg(a, int);
	int y = count(x, 10);

	if (x > 0)
	{
		_putchar(' ');
		print_number(x, 10);
		return (y + 1);
	}
	print_number(x, 10);
	return (y);
}

/**
 * handle_hash - handles the hash flag
 * @a: argument list
 * Return: count of characters printed
*/
int handle_hash(va_list a)
{
	int x = va_arg(a, int);
	int y;

	_putchar(0 + '0');

	if (x < 0)
	{
		y = unsigned_count(x, 8);
	}
	else
	{
		y = count(x, 8);
	}
	print_unsigned_number(x, 8);
	return (y + 1);
}
