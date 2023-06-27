#include "main.h"

/**
 * _printf - prints output to a format
 * @format: character array
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int val = 0, count = 0, putval, reval;

	va_start(args, format);
	
	if (args == NULL)
		return (-1);
	
	if(!format)
	{
		return (-1);
	}
        for (count = 0;format[count] != '\0'; count++)
        {
                if (format[count] == '%')
                {
                        if (format[count + 1] == 'c')
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
                                count++;
                        }
                        else if ((format[count + 1] == 'd') || (format[count + 1] == 'i'))
                        {
                                reval = put_int(va_arg(args, int));
                                val += reval - 1;
                                count++;
                        }
                        else
                        {
                                return (-1);
                        }
                }
                else
                        _putchar(format[count]);
                val++;
        }
        va_end(args);
        return (val);
}



