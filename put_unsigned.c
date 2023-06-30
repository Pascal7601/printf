#include "main.h"

/**
 * put_unsigned - prints unsigned integers
 * @num: number passed
 * Return: integer
 */
int put_unsigned(unsigned int num)
{
	int count;

	if (num == 0)
	{
		return (0);
	}
	else
	{
		count = put_unsigned(num / 10);
		count++;
		_putchar((num % 10) + '0');
	}
	return (count);
}
