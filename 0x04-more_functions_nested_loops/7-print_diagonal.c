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
for (j = 1; j < i; j++)
{
_putchar(32);
}

_putchar(92);
_putchar('\n');

}
}
else
{
_putchar('\n');
}
}
