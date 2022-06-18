#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    int i , j = 0 ;
for (i = 0; dest[i]; i++);
while (*(src + j))
    {
        while(j < n)
        {
            *(dest + i) = *(src + j);
            j++;
        }
        j++;
    }
return (dest);
}