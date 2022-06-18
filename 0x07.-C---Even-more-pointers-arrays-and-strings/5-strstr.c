#include "main.h"

 char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *hay = haystack;
		char *need = needle;

		while (*haystack == *need)
		{
			haystack++;
			need++;
		}
		if (!*need)
			return (hay);
		haystack = hay + 1;
	}
	return (0);
}