#include "main.h"
/*
*leet(): encodes a string into 1337.
*@*s; string
*Return: char s encoded into 1337
*/
char *leet(char *s)
{
    int i,j;
    char l[] = "AaEeOoTtLl";
    char n[] = "4433007711";
   
   for(i = 0 ; s[i] ; i++)
   {
       for(j = 0 ; l[j] ; j++)
   {
      if(s[i] == l[j])
       {
           s[i] = n[j];
       }
   }
       
   }
    return(s);
}