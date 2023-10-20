#include "main.h"
#include <stdio.h>
/**
 * printChar - this function print a character ch and returns 2
 * @arg: the input character to be printed
 * @buff: the buffer pointer
 * @ibuff: the index of the buffer pointer
 * Return: On success 1.
 */
int printChar(va_list arg, char *buff, unsigned int ibuff)
{
	char ch;

	ch = va_arg(arg, int);
	handl_buf(buff, ch, ibuff);

	return (1);
}
