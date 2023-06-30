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
int binary_put(int n);
int put_unsigned(unsigned int num);
int print_octal(unsigned int num);
int lower_hex(unsigned int num);
int upper_hex(unsigned int num);
#endif
