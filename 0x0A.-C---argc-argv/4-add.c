#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int i, d, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (d = 0; argv[i][d]; d++)
		{
			if (argv[i][d] < '0' || argv[i][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
<<<<<<< HEAD
}
=======
}
>>>>>>> c6a527fb9d5ac236ede6c765048884094d9aebfe
