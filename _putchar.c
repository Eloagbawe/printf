#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @a: character to be written
 * Return: 1 if sucessful and -1 if failed
*/
int _putchar(char a)
{
	return (write(1, &a, 1));
}

/**
 * print_char - prints a character
 * @a: argument list
 * Return: 1 if successful, 0 otherwise
*/
int print_char(va_list a)
{
	if (_putchar(va_arg(a, int)))
	{
		return (1);
	}
	return (0);
}

/**
 * print_string - prints a string
 * @a: argument list
 * Return: number of characters printed
*/
int print_string(va_list a)
{
	char *s = va_arg(a, char *);
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - prints the percentage character
 * @a: argument list
 * Return: 1 if successful, 0 otherwise
*/

int print_percent(va_list a __attribute__((__unused__)))
{
	if (_putchar('%'))
	{
		return (1);
	}
	return (0);
}
