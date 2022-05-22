#include "main.h"
/**
 * count - counts how many digits in an integer
 * @n: integer
 * @base: number base
 * Return: count of digits
*/

int count(int n, int base)
{
	int i = 0;

	if (n < 0)
	{
		i++;
	}

	while ((n / base) != 0)
	{
		i++;
		n = n / base;
	}
	i++;
	return (i);
}

/**
 * unsigned_count - counts how many digits in an unsigned integer
 * @n: integer
 * @base: number base
 * Return: count of digits
*/

int unsigned_count(int n, int base)
{
	unsigned int x;
	int i = 0;

	x = n;

	while ((x / base) != 0)
	{
		i++;
		x = x / base;
	}
	i++;
	return (i);
}
