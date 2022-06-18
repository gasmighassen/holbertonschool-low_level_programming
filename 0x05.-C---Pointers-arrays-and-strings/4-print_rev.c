#include "main.h"
/*
*print_rev: prints the reverse of a string
*@*s: pointer of type string
*Return : void
*/
void print_rev(char *s)
{
int c = 0;
while (*s != '\0')
{
    c++;
    s++;
}
while (c >= 0)
{
    _putchar(*s);
    s--;
    c--;
}
_putchar('\n');
}
