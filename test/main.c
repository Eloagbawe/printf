#include "../main.h"
#include <limits.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

     len = _printf("Let's try to printf a simple sentence.\n");
     len2 = printf("Let's try to printf a simple sentence.\n");
     ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
   _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
     _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
     _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");


/**
 * //len = _printf("Let's try to printf a simple sentence.\n");
  * //len2 = printf("Let's try to printf a simple sentence.\n");
   * //ui = (unsigned int)INT_MAX + 1024;
   * //ui = 89;
   * //len = _printf("%u\n", ui);
   * //len2 = printf("%u\n", ui);
   * // addr = (void *)0x7ffe637541f0;
   * //len =  _printf("Length:[%d, %i]\n", len, len);
   * //len2 = printf("Length:[%d, %i]\n", len2, len2);
   * //len = _printf("Negative:[%d]\n", 762534);
   * //len2 = printf("Negative:[%d]\n", 762534);
   * // _printf("Unsigned:[%u]\n", ui);
   * // printf("Unsigned:[%u]\n", ui);
   * // _printf("Unsigned octal:[%o]\n", ui);
   * // printf("Unsigned octal:[%o]\n", ui);
   * //len = _printf("Unsigned hexadecimal:[%x, %d, %i, %s, %s]\n", ui, ui, ui, "hi", "he");
    *    //len = _printf("Unsigned hexadecimal:[%X]\n", ui);
     *   //len2 = printf("Unsigned hexadecimal:[%X]\n", ui);
    * //  len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    * // len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	*
    * //len2 = printf("Unsigned hexadecimal:[%x, %d, %i, %s, %s]\n", ui, ui, ui, "hi", "he");
    * // len = _printf("%x, %X\n", ui, ui);
    * // len2 = printf("%x, %X\n", ui, ui);
    * // _printf("Character:[%c]\n", 'H');
    * // printf("Character:[%c]\n", 'H');
    * //len = _printf("String:[%s]\n", "I am a string !");
    * //len2 = printf("String:[%s]\n", "I am a string !");
    * //len2 = printf("String:[%s]\n", "I am a string !");
    * // _printf("Address:[%p]\n", addr);
    * // printf("Address:[%p]\n", addr);
    * // len = _printf("Percent:[%%]\n");
    * // len2 = printf("Percent:[%%]\n");
   *
    * //len = _printf("Unknown:[%r]\n");
    * //len2 = printf("Unknown:[%r]\n");
    * // _printf("%b\n", 98);
    * // len = _printf("%S\n", "Best\tSchool");
    * // len2 = printf("%s\n", "Best\tSchool");
    *
    * // _printf("% d\n", -26);
    * // _printf("% d\n", 26);
    * //len = _printf("%+i\n", -52);
    * //len2 = printf("%+i\n", -52);
    * // _printf("Len:[%d]\n", len);
    * // printf("Len:[%d]\n", len);
    * // printf("Len:[%d]\n", len2);
    * // _printf("Len:[%d]\n", len2);
*
    * // _printf("%+i\n", 52);
    * // len = _printf("%#o\n", -23);
    * // len2 = printf("%#o\n", -23);

    * // int i = _putchar('00');
    * // printf("\n");
    * // printf("%d\n", i);

    * // printf("%i\n", 012);
    * // _printf("%i\n", 012);
*
    * //printf("Len:[%d]\n", len);
    * //printf("Len:[%d]\n", len2);
   * // _printf("Len:[%d]\n", len);
   * // _printf("Len:[%d]\n", len2);
    */
    return (0);
}
