#include "main.h"

/**
* print_diagonal - prints diaginal lines
* @n: parameter
* Return: no returm
*/

void print_diagonal(int n)
{
int i, j;

if (n > 0)
{
for (i = 1; i <= n; i++)
{

_putchar(92);
_putchar('\n');
if (i < n)
{
for (j = 0; j < i; j++)
{
_putchar(32);
}
}
}
}
else
{
_putchar('\n');
}
}
