#include "main.h"
#include <ctype.h>

char *string_toupper(char *s)
{
    int i;
    for (i = 0; s[i] ; i++)
    {  
        s[i] = toupper(s[i]); 
    }
   return(s);
}
