#include "main.h"

/**
 * lower_hex - prints lower hexadecimal
 * @num: integer passed
 * Return: integer
 */
int lower_hex(long int num)
{
	long int count = 0, div;

	if (num == 0)
		return (1);
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	div = num % 16;

	lower_hex(num / 16);
	if (div < 10)
	{
		_putchar(div + '0');
		count++;
	}
	else
	{
		_putchar((div - 10) + 'a');
		count++;
	}
	return (count);
}
