#include "main.h"

/**
 * print_number - prints a signed number
 * @a: number to be printed
 * @base: number base
 * Return: count of numbers printed
*/

int print_number(int a, int base)
{
	int x, y;

	if (a < 0)
	{
		_putchar('-');
		a = a * -1;
	}
	x = a % base;
	y = a / base;

	if (y > 0)
	{
		print_number(y, base);
	}
	if (_putchar(x + '0'))
	{
		return (1);
	}

	return (0);
}

/**
 * print_decimal - prints a decimal
 * @a: argument list
 * Return: count of numbers printed
*/

int print_decimal(va_list a)
{
	int x = va_arg(a, int);
	int counter = count(x, 10);

	print_number(x, 10);
	return (counter);
}

/**
 * print_integer - prints an integer
 * @a: argument list
 * Return: count of numbers printed
*/

int print_integer(va_list a)
{
	int x = va_arg(a, int);
	int counter = count(x, 10);

	print_number(x, 10);
	return (counter);
}

/**
 * print_unsigned_number - prints an unsigned number
 * @a: number to be printed
 * @base: number base
 * Return: number of characters printed
*/

int print_unsigned_number(int a, int base)
{
	int x, y;
	unsigned int z;

	z = a;

	x = z % base;
	y = z / base;

	if (y > 0)
	{
		print_unsigned_number(y, base);
	}
	if (_putchar(x + '0'))
	{
		return (1);
	}

	return (0);
}

/**
 * print_unsigned_int - prints an unsigned integer
 * @a: argument list
 * Return: count of numbers printed
*/

int print_unsigned_int(va_list a)
{
	int x = va_arg(a, int);
	int counter = unsigned_count(x, 10);

	print_unsigned_number(x, 10);
	return (counter);
}
