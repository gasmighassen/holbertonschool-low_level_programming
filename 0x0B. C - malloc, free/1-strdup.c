#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
    char *s;
    unsigned int size , j = 0;
    
    if (str == NULL)
    {
        return (NULL);
    }
    s = malloc(sizeof(char) * (size = strlen(str)));
    if (s == NULL)
    {
        return (NULL);
    }
    while (str[j] != '\0')
    {
        s[j] = str[j];
        j++;
    }
    return (s);
}