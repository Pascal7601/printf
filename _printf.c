#include "main.h"

/**
 * _printf - prints output to a format
 * @format: character array
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;

	int count, val = 0, putval;
	int perval = 0;
	

	va_start(args, format);

	if(format)
	{
		for (count = 0;format[count] != '\0'; count++)
		{
			if (format[count] != '%')
			{
				_putchar(format[count]);
			}
			else if (format[count + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				count++;
			}
			else if (format[count + 1] == 's')
			{
				putval = _puts(va_arg(args, char *));
				val += putval - 1;
				count++;
			}
			else if (format[count + 1] == '%')
			{
				_putchar(format[count + 1]);
				val += perval;
			}
			val++;
		}
	}
	return (-1);
	return (val);
}
