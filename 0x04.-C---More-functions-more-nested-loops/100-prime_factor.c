#include <stdio.h>
#include <stdint.h>

void main()
{
long long int num = 612852475143;
int i = 3;
int p = 0;
while(num % 2 == 0)
{
    num /= 2;
    p = 2;
}
while(num != 1)
{
while(num % i == 0)
{
num /= i;
i +=2;
}
p = i;
printf("%d",p);
}
}
