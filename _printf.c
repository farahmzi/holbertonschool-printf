#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
*_printf - prints characters to stdout based on spesifer (%) format
*@format: accept %c,%s,%i,%d
*Return: number of printed characters
*/
int _printf(const char *format, ...)
{
int print_count = 0;
va_list args;
int i;
int count;
i = 0;
count = 0;
va_start(args, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
print_count += specifier_handler(args, format, i, count);
va_end(args);
return (print_count);
}
