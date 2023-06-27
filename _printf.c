#include "main.h"

/**
 * _printf - prints output to a format
 * @format: character array
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
va_list args;
int i, count = 0;
char *str;

va_start(args, format);

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
char specifier = format[i + 1];
switch (specifier)
{
case 'c':
_putchar(va_arg(args, int));
count++;
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
while (*str != '\0')
{
_putchar(*str);
str++;
count++;
}
break;
case '%':
_putchar('%');
count++;
break;
default:
_putchar('%');
_putchar(specifier);
count += 2;
break;
}
i++;
}
else
{
_putchar(format[i]);
count++;
}
}
va_end(args);
return (count);
}
