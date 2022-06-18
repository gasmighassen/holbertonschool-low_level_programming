#include <stdio.h>

int main ()
{
    int x =0;
    char y ='a';
    while (x <= 9)  {
        putchar(x+'0');
        x++;
    }
     while (y <= 'f')  {
        putchar(y);
        y++;
    }

   putchar('\n');
    return 0 ;
}