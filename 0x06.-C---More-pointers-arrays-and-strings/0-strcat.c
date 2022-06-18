#include "main.h"

char *_strcat(char *dest, char *src)
{
    int i , j = 0 ;
for (i = 0; dest[i]; i++);
while (*(src + j))
    {
    *(dest + i) = *(src + j);
    i++;
    j++;
    }
return (dest);
}