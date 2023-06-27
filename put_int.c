#include "main.h"

/**
 * put_int - prints integers recursively
 * @num: integer passed
 * Return: integer
 */

int put_int(int num)
{
	int val = 0, i, digits = 0, divisor = 1, temp;
	int digit;

    	if (num < 0)
    	{	
        	_putchar('-');
        	num = -num;
       		val++;
    	}

    if (num == 0)
    {
        _putchar('0');
        return 1;
    }

    temp = num;
    while (temp > 0)
    {
        temp /= 10;
        digits++;
    }

    
    for (i = 1; i < digits; i++)
        divisor *= 10;

    while (divisor > 0)
    {
        digit = num / divisor;
        _putchar(digit + '0');
        val++;
        num %= divisor;
        divisor /= 10;
    }

    return val;
}

