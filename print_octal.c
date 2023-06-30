#include "main.h"

/**
 * print_octal - prints octal numbers
 * @num: integer passed
 * Return: integer
 */
int print_octal(long int num)
{
	long int count = 0;

	if (num == 0)
	{
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	else
	{
		count += print_octal(num / 8);
		_putchar((num % 8) + '0');
		count++;
	}
	return (count);
}
