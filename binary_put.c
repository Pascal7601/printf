#include "main.h"

/**
 * binary_put - prints binary
 * @n: integer passed
 * Return: integer
 */
int binary_put(long int n)
{
	int count = 0;

	if (n == 0)
		return (0);
	if ( n < 0)
	{
		count++;
		_putchar('-');
		n = -n;
	}
	if (n <= 1)
	{
		_putchar(n + '0');
		return (count + 1);
	}
	if (n > 0)
	{
		binary_put(n / 2);
		count = _putchar((n % 2) + '0');
		count++;
	}
	return (count);
}

