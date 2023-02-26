#include "main.h"

/**
 * print_sign - print the sign of a num
 * @n: the num to be checked for
 * Retuirn: 1 and prints + if n is >0
 * 0 if n>0
 * -1 and prints - if n<o
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
