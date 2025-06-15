#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
*specifier_handler -handles stdout based on spesifer (%) format
*@format: accept %c,%s,%i,%d
*@i: itterator
*@count: number of printed chars
*@args: Argument list
*Return: number of printed characters
*/
int specifier_handler (va_list args, const char *format, int i, int count)
{
char *str;
count = 0;
for (i = 0; format[i]; i++)
{
if (format[i] == '%' && format[i + 1])
{
i++;
switch (format[i])
{
case '%':
write(1, "%", 1);
count++;
break;
case 'c':
count += char_print((char) va_arg(args, int));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
count += string_print(str);
break;
case 'd':
case 'i':
count += number_print(va_arg(args, int));
break;
default:
write(1, "%", 1);
write(1, &format[i], 1);
count += 2;
break;
}
}
else
{
write(1, &format[i], 1);
count++;
}
}
return (count);
}
