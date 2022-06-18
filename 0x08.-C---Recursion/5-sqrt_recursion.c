#include <stdio.h>
int checker (int n , int base)
{
    if (n * n == base)
    {
        return (n);
    }
    else if (n * n > base)
    {
        return(-1);
    }
    else
    {
        return(checker(n+1 , base));
    }
    
}

int _sqrt_recursion(int n)
{
return (checker(1,n));
}
