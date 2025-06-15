#include <stdio.h>
#include <limits.h>
#include "main.h"

int main(void)
{
int len;
   len =  _printf("hello\n");
printf("\n%d\n", len);
len = _printf("%d\n",-1024);
    printf("%d",-1024);
printf("\n%d\n", len);
len = _printf("%d\n",INT_MAX);
    printf("%d",INT_MAX);
printf("\n%d\n", len);
len = _printf("%d\n",INT_MIN);
    printf("%d",INT_MIN);
printf("\n%d\n", len);
len = _printf("%d\n",100000);
    printf("%d",100000);

 return (0);
}
