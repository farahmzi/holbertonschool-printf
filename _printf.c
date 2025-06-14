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
int i;
int print_count = 0;
char *str;
va_list args;
va_start(args, format);
for (i = 0; format[i]; i++)
{
if (format[i] == '%' && format[i + 1])
{
i++;
switch (format[i])
{
case '%':
write(1, "%", 1);
print_count++;
break;
case 'c':
print_count += char_print((char) va_arg(args, int));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
print_count += string_print(str);
break;
case 'd':
print_count += number_print(va_arg(args, int));
break;
case 'i':
print_count += number_print(va_arg(args, int));
break;
default:
write(1, "%", 1);
write(1, &format[i], 1);
print_count += 2;
break;
}
}
else
{
write(1, &format[i], 1);
print_count++;
}
}
va_end(args);
return (print_count);
}
