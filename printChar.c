#include "main.h"
#include <stdio.h>
/**
 * printChar - this function writes a character and returns 1
 * @arg: the input character to be printed
 * Return: always return 1
 */
int printChar(va_list arg)
{
	char Mychar;

	Mychar = va_arg(arg, int);
	write(1, &Mychar, 1);

	return (1);
}
