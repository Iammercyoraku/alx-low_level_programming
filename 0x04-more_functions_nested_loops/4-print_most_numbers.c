#include "main.h"
/**
* print_most_numbers: print number from 0 to 9
* except 2 and 4, followed by anew line
*/
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && 1 != 4)
{
_putchar(1 + '0');
}
}
_putchar('\n');
}
