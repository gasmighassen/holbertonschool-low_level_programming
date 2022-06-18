#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
    int i ;
    char *p = s ;
    for(i = n ; i > 0 ; i--)
    {
        *p = b ;
        p++;
    }
    return(p);
}