#include <stdio.h>

int checker_p(int n , int p)
{
    if (p % n == 0 || p < 2)
		return (0);
	else if (n == p - 1)
		return (1);
	else if (p > n)
		return (checker_p(n + 1, p));
	return (1);
}
int is_prime_number(int n)
{
 return(checker_p(2,n));
}
