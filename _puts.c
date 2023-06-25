#include "main.h"

/**
 * _puts - writes characters to stdout
 * @str: string passed
 * Return: integer
 */
int _puts(const char *str)
{
	int element = 0, i;

	if (str)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
			element++;
		}
	}
	return (element);
}
