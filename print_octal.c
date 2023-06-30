#include "main.h"

/**
 * print_octal - prints octal numbers
 * @num: integer passed
 * Return: integer
 */
int print_octal(unsigned int num)
{
	int count = 0;

	if (num == 0)
	{
		return (0);
	}
	else
	{
		print_octal(num / 8);
		count++;
		_putchar((num % 8) + '0');
	}
	return (count);
}
