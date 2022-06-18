#include <stdio.h>

int main ()
{
    char x ='z';
    while (x >= 'a') {
        putchar(x);
        x --;
    }
   putchar('\n');
    return 0 ;
}