#include "main.h"
#include <stdio.h>
/**
 * printChar - this function writes a character and returns 1
 * @arg: the input character to be printed
 * Return: always return 1
 */
int printChar(va_list arg, char *buf, unsigned int ibuf)
{
	char Mychar;

	Mychar = va_arg(arg, int);
	handl_buf(buf, Mychar, ibuf);
		
	return (1);
}
