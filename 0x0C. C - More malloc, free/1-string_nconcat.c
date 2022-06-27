#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *s, *a;
	unsigned int i, len, j;
	unsigned int size;

	len = 0;
	a = "";
	if (s1 == NULL)
    {
	    s1 = a;
    }
	if (s2 == NULL)
    {
        s2 = a;
    }	
	while (s1[len] != '\0')
    {
        len++;
    }		
	size = (len + n) * sizeof(*s);
	s = malloc(size + 1);
	if (s == NULL)
    {
        return (NULL);
    }	
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
