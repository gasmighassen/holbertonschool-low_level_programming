#include <stdio.h>

int main ()
{
    char x ='a';
    char y ='A';
    while (x <= 'z')  {
        putchar(x);
        x++;
    }
     while (y <= 'Z')  {
        putchar(y);
        y++;
    }

   putchar('\n');
    return 0 ;
}