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
int alpa, bla;

bla = '\n';
for (alpa = 'a'; alpa <= 'z'; alpa++)
{
if (alpa == 'e' || alpa == 'q')
continue;
putchar(alpa);

}
putchar(bla);
return (0);
}