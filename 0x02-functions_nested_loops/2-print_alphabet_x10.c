#include "main.h"
/**
*print_alphabet_x10 - print 10x the alphabet in lower case
*/

void print_alphabet_x10(void)

{

int count = 0;
char j;

while (count++ <= 9)
{
for (j = 'a'; j <= 'z'; j++)

_putchar(j);

_putchar('\n');

}

}
