#include <stdio.h>
/**
 *main - Print alphabet in lower case
 *Return: 0 (always)
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
