#include "main.h"

void reverse_array(int *a, int n)
{
    int i ; 
    int tmp[20];
 
    for (i = 0 ; i < n ; i++) {
        tmp[n - 1 - i] = a[i];
    }
 
    for (i = 0 ; i < n ; i++) {
        a[i] = tmp[i];
    }
    
}

