#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>

int _putchar(char a);
int _printf(const char *const format, ...);
int check_valid_identifier(char s);
int get_identifier_func(va_list ap, char s);
int print_char(va_list a);
int print_string(va_list a);
int print_percent(va_list a);
int print_number(int a, int base);
int print_decimal(va_list a);
int print_binary(va_list a);
int print_integer(va_list a);
int print_unsigned_number(int a, int base);
int print_unsigned_int(va_list a);
int print_unsigned_octal(va_list a);
int print_hexadecimal(int a, char alph[]);
int print_lowercase_hexadecimal(va_list a);
int print_uppercase_hexadecimal(va_list a);
int print_conv_specifier(va_list a);
int check_valid_flag(char s, char next);
int get_flags_func(va_list a, char s, char next);
int handle_plus(va_list a);
int handle_space(va_list a);
int handle_hash(va_list a);
int count(int n, int base);
int unsigned_count(int n, int base);
int neutral_count(int n, int base);

/**
 * struct print_identifiers - identifiers for my printf function
 * @a: input
 * @f: function for input
 * Description: Longer description
*/

typedef struct print_identifiers
{
	char *a;
	int (*f)(va_list);
} print_id;

#endif
