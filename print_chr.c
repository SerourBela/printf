#include "main.h"
#include <stdio.h>
/**
 * print_Chr - this function print a character ch and returns 2
 * @arguments: the input character to be printed
 * @buf: the buffer pointer
 * @ibuf: the index of the buffer pointer
 * Return: always returns 1.
 */
int print_chr(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	handl_buf(buf, c, ibuf);

	return (1);
}
