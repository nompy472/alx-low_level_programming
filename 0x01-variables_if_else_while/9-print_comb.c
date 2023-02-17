#include <stdio.h>
/**
 *main -  prints all possible combinations of single-digit numbers
 *Return:0
 */
int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
if (a < 10)
{
putchar(',');
putchar(' ');
}
}
return (0);
}
