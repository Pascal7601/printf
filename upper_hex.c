#include "main.h"

/**
 * upper_hex - prints lower hexadecimal
 * @num: integer passed
 * Return: integer
 */
int upper_hex(unsigned int num)
{
        int count = 0, div;

        if (num == 0)
                return (0);

        div = num % 16;

        lower_hex(num / 16);
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
