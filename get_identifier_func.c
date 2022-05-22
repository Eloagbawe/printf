#include "main.h"
#include <stddef.h>
/**
 * check_valid_identifier - check for valid identifier
 * @s: flag
 * Return: 1 if sucessful
*/

int check_valid_identifier(char s)
{
	int i;
	char identifiers[] = "csbdiuoxXS%";

	for (i = 0; i < 11; i++)
	{
		if (s == identifiers[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
 * get_identifier_func - returns a function pointer
 * @ap: arguments
 * @s: character
 * Return: result of a function pointer
*/

int get_identifier_func(va_list ap, char s)
{
	int j;
	print_id pi[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_integer},
		{"b", print_binary},
		{"u", print_unsigned_int},
		{"o", print_unsigned_octal},
		{"x", print_lowercase_hexadecimal},
		{"X", print_uppercase_hexadecimal},
		{"S", print_conv_specifier},
		{NULL, NULL}
	};

	j = 0;

	while (j < 11)
	{
		if (s == *pi[j].a)
		{
			return (pi[j].f(ap));
		}
		j++;
	}

	return (0);
}
