#include "main.h"
#include <stdio.h>
/*
*_strcpy():copies the string pointed to by src to the buffer pointed to by dest
*@*dest: pointer of type array of string
*@*src: pointer of type array of string
*Return: string pointed by *dest
*/
char *_strcpy(char *dest, char *src)
{
    int i ;
    while (*(src + i))
    {
    *(dest + i) = *(src + i);
    i++;
    }
while (*(dest + i))
	{
	printf("%d", dest[i]);
	i++;
	}
return (dest);
}