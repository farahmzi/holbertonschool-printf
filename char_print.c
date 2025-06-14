#include <unistd.h>
#include <stdio.h>
/**
*char_print - Print a character
*@c: character
*Return:1
*/
int char_print(char c)
{
write(1, &c, 1);
return (1);
}
