#include "main.h"
/**
 *_abs - absolute value
 *@c: number
 *Return: Value of number
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
else
{
return (c);
}
}
