#include <stdio.h>

int main ()
{
    
    
    int i,k,j,f;
        for(i=0 ; i<=9 ; i++) {
            k=i;
            k++;
        for (j=k ; j<=9 ; j++) { 
            f=j;
            f++;
        for (k=f ; k<=9 ; k++) {   

                putchar(i+'0');
                putchar(j+'0');
                putchar(k+'0');               
            
        
         if (!(i==7 && j==8 && k==9)) 
         {
             putchar(',');
            putchar(' ');
         }  
        }
    }
        }
        
   putchar('\n');
    return 0 ;
}