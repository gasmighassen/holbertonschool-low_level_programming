/*
*File : 1-swap.c
*Auth : Gasmi ghassen .
*/
#include "main.h"
/*
* swap_int() swap the values of two integers .
*/
void swap_int(int *a, int *b)
{
int temp = *a ;
*a = *b;
*b = temp;
}
