#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - This prints the last digit of a random number
*
* Return: Always 0
*/
int main(void)
{
/* your code goes there */
int alpa, bla, coma, spp;

spp = ' ';
coma = ',';
bla = '\n';
for (alpa = '0'; alpa <= '9'; alpa++)
{
putchar(alpa);
if (alpa == '9')
	break;
putchar(coma);
putchar(spp);
}

putchar(bla);
return (0);
}
