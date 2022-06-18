#include <stdio.h>
#include <stdlib.h>

int main(int argc , char* argv[])
{
    int arg0, arg1;

    if(argc != 3 )
    {
        printf("Error\n");
        return(1);
    }
    arg0 = atoi(argv[1]);
    arg1 = atoi(argv[2]);
    printf("%d\n", (arg0 * arg1));
    return(0);
}
