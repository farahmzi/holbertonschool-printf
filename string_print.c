#include <unistd.h>
#include <stdio.h>
/**
 *string_print - A function that prints string
 *@str: char pointer
 *Return:number of printed character
 **/
int string_print(char *str)
{
int i;
i = 0;
if (str == NULL)
return (0);
while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}
return (i);
}
