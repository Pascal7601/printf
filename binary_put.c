#include "main.h"

/**
 * binary_put - prints binary
 * @n: integer passed
 * Return: integer
 */
int binary_put(int n)
{
	int count = 0;

	if (n > 0)
	{
		binary_put(n / 2);
		_putchar((n % 2) + '0');
		count++;
	}
	return (count);
}

