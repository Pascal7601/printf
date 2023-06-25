#include "main.h"

/**
 * _putchar - prints characters
 * @f: character
 * Return: integer
 */

int _putchar(char f)
{
	return (write(1, &f, 1));
}
