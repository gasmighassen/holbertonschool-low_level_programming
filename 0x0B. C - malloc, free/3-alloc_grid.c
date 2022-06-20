#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
    int **a;
    int i, j;
    if(width <= 0 || height <= 0)
    {
        return (NULL);
    }
    a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
    {
        return (NULL);
    }
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
            {
                free(a[j]);
            }
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
    return (a);
}
