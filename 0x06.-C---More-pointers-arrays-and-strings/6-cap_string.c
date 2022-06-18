#include "main.h"
#include <ctype.h>

char *cap_string(char *s)
{
    int i;
    for (i = 0; s[i] ; i++)
    { 
        if(s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == ' ' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
        {
            s[i + 1] = toupper(s[i + 1]);
        }
       
        }
        return(s);
}