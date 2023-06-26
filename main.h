#ifndef PRINT_H
#define PRINT_H

/**header files **/
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/** PROTOTYPES**/
int _printf(const char *format, ...);
int _putchar(char f);
int _puts(const char *str);
int put_int(int num);
#endif
