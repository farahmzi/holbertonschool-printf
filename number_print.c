#include <unistd.h>
/**
*number_print - prints characters to stdout based on spesifer (%i , %d) format
*@num: takes an int
*Return: number of printed characters
*/
int number_print(int num)
{
char c;
int count;
long n = num;

if (n < 0)
{
write(1, "-", 1);
n = -n;
}
 count = 0;
if (n / 10)
count += number_print(n / 10);
c = n % 10 + '0';
write(1, &c, 1);
return (count + 1);
}
