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
int binary_put(long int n);
int put_unsigned(long unsigned int num);
int print_octal(long int num);
int lower_hex(long int num);
int upper_hex(long int num);
#endif
