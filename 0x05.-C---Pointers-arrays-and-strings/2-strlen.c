/*
*File : 2-strlen.c
*Auth : Gasmi ghassen .
*/
#include "main.h"
/*
*_strlen() - return length of a string .
*/
int _strlen(char *s)
{
int c = 0;
while (*s != '\0')
{
c++;
s++;
}
return (c);
}
