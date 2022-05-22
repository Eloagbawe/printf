#include "main.h"
/**
 * check_valid_flag - checks for valid flag
 * @s: flag
 * @next: next character
 * Return: 0 if sucessful
*/

int check_valid_flag(char s, char next)
{
	int i;
	char int_flags[] = "+ ";

	for (i = 0; i < 2; i++)
	{
		if ((s == int_flags[i]) && ((next == 'd') || (next == 'i')))
		{
			return (1);
		}
	}

	if ((s == '#') && (next == 'o'))
	{
		return (1);
	}
	return (0);
}

/**
 * get_flags_func - returns a function that points to a flag
 * @ap: argument list
 * @s: present char
 * @next: next char
 * Return: 0 if successful
*/

int get_flags_func(va_list ap, char s, char next)
{
	if ((s == '+') && ((next == 'd') || (next == 'i')))
	{
		return (handle_plus(ap));
	}
	else if ((s == ' ') && ((next == 'd') || (next == 'i')))
	{
		return (handle_space(ap));
	}
	else if ((s == '#') && (next == 'o'))
	{
		return (handle_hash(ap));
	}
	else
	{
		return (0);
	}
}
