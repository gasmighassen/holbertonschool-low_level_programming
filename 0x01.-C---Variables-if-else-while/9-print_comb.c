#include <stdio.h>

int main ()
{
    int x =0;
    while (x <=9) {
        putchar(x+'0');
        if (x<9)
        {
            putchar(',');
            putchar(' ');
        }

        x ++;

    }
   putchar('\n');
    return 0 ;
}