#include "main.h"

/**
 * put_int - prints integers recursively
 * @num: integer passed
 * Return: integer
 */
int put_int(int num)
{
        int n, val = 0;

        if (num < 0)
        {
                _putchar('-');
                num = -num;
        }

        if (num < 10)
        {
                _putchar(num + '0');
                val++;
                return (1);
        }
        else
        {
                n = num / 10;
                val += put_int(n);
                val++;
                _putchar((num % 10) + '0');
        }
        return (val);
}

