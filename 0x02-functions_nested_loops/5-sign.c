#include "main.h"
/**
 *print_sign -Sign of number
 *@n: number check
 *Return: 1 0r -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
