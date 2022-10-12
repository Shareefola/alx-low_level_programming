#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - main
 *@argc: argument count
 *@argv: argument array
 *Return: int
 */
int main(int argc, char **argv)
{
	int inta, intb;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	f = get_op_func(argv[2]);

	if (if == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] != "+" && argv[2][0] != "-" && argv[2][0] != "/" &&
				argv[2][0] != "*" && argv[2][0] != "%") || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		Exit(99);
	}
	inta = atoi(argv[1]);
	inta = atoi(argv[3]);

	printf("%d\n", f(int a, int b));

	return (0);
}
