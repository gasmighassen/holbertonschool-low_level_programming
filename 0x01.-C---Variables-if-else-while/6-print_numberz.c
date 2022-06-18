#include <stdio.h>

int main ()
{
    int x =0;
    while (x <= 9) {
        putchar(x+'0');
        x ++;
    }
   putchar('\n');
    return 0 ;
}