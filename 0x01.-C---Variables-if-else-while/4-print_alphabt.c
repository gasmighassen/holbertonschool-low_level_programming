#include <stdio.h>

int main ()
{
    char x ='a';
    while (x <= 'z') {
        if (x=='e' || x=='q')
        {

            x++;
        }
        else {
            putchar(x);
            x ++;
        }
       
    }
   putchar('\n');
    return 0 ;
}