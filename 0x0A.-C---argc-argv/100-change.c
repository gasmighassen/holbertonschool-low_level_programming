#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int coins , cents = 0 ;
if(argc != 2)
{
    printf("Error\n");
    return(1);
}
coins = atoi(argv[1]);
if(coins <= 0)
{
    printf("0\n");
    return(0);
}
if (coins >= 25)
	{
		cents += coins / 25;
		coins = coins % 25;
	}
if (coins >= 10)
	{
		cents += coins / 10;
		coins = coins % 10;
	}    
if (coins >= 5)
	{
		cents += coins / 5;
		coins = coins % 5;
	}
if (coins >= 2)
	{
		cents += coins / 2;
		coins = coins % 2;
	}
if (coins >= 1)
	{
		cents += coins / 1;
		coins = coins % 1;
	}
printf("%d\n",cents);
return(0);       
}
