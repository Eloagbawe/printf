#include "main.h"

/**
 * print_binary - prints an binary number
 * @a: argument list
 * Return: count of numbers printed
*/

int print_binary(va_list a)
{
	int x = va_arg(a, int);
	int counter = unsigned_count(x, 2);

	print_unsigned_number(x, 2);
	return (counter);
}

/**
 * print_unsigned_octal - prints an octal number
 * @a: argument list
 * Return: count of numbers printed
*/

int print_unsigned_octal(va_list a)
{
	int x = va_arg(a, int);
	int counter = unsigned_count(x, 8);

	print_unsigned_number(x, 8);
	return (counter);
}

/**
 * print_hexadecimal - prints an hexadecimal number
 * @a: number to be printed
 * @alph: alphabet array
 * Return: count of characters printed
*/

int print_hexadecimal(int a, char alph[])
{
	unsigned int n;
	int x, y, z;

	n = a;

	x = n % 16;
	z = n / 16;

	if (z > 0)
	{
		print_hexadecimal(z, alph);
	}

	if (x >= 10)
	{
		y = x - 10;
		if (_putchar(alph[y]))
		{
			return (1);
		}
	}
	else
	{
		if (_putchar(x + '0'))
		{
			return (1);
		}
	}

	return (0);
}

/**
 * print_lowercase_hexadecimal - prints a hexadecimal number in lowercase
 * @a: argument list
 * Return: count of characters printed
*/

int print_lowercase_hexadecimal(va_list a)
{
	int x = va_arg(a, int);
	char alph[] = "abcdef";
	int counter = unsigned_count(x, 16);

	print_hexadecimal(x, alph);
	return (counter);
}

/**
 * print_uppercase_hexadecimal - prints a hexadecimal number in uppercase
 * @a: argument list
 * Return: void
*/

int print_uppercase_hexadecimal(va_list a)
{
	int x = va_arg(a, int);
	char alph[] = "ABCDEF";
	int counter = unsigned_count(x, 16);

	print_hexadecimal(x, alph);
	return (counter);
}
