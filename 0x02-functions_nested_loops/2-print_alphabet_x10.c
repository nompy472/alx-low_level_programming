#include "main.h"
/**
 *print_alphabet_x10 - Print 10 times
 *Return:0
 */
void print_alphabet_x10(void)
{
char c;
int n = 0;
while (n <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
n++;
}
}
