#include "main.h"

/**
 * put_int - prints integers recursively
 * @num: integer passed
 * Return: integer
 */
int put_int(int num)
{
	int n, val = 0;

	if (num < 10)
	{
		_putchar(num + '0');
		return (1);
	}
	else
	{
		n = num / 10;
		val += put_int(n);
		val += 1;
		_putchar((num % 10) + '0');
		return (val);
	}
}
