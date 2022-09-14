#include <stdio.h>
#include "main.h"
/**
 *main - main block
 *Description:Print the first 50 fibonacci number
 *Numbers must be coma and space separated.
 */
int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu\n", j);
		}
		k = j;
		j += i;
		i = k;
		count++;
	}
	return (0);
}
