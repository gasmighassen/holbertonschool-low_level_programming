#include "main.h"
/*
*rev_string: reverse the elements of an array
*@*s: pointer of type array of string
Return: void
*/
void rev_string(char *s)
{
int i = 0, j = 0;
char tmp[20];
while (*(s + i))
    {
    *(tmp + i) = *(s + i);
    i++;
    }
i = i - 1;
while (i >= 0)
    {
    *(s + i) = *(tmp + j);
    j++;
    i--;
    }
}
