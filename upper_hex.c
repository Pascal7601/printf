#include "main.h"

/**
 * upper_hex - prints lower hexadecimal
 * @num: integer passed
 * Return: integer
 */
int upper_hex(long int num)
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

        upper_hex(num / 16);
        if (div < 10)
        {
                _putchar(div + '0');
                count++;
        }
        else
        {
                _putchar((div - 10) + 'A');
                count++;
        }
        return (count);
}
