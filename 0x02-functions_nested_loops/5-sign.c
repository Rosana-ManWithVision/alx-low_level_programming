#include "main.h"

/**
 * print_sign - print the sign of a num
 * @n: the num to be checked for
 * Return: 1 and prints + if n is >0
 * 0 if n>0
 * -1 and prints - if n<o
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0')
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
