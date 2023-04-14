#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int res = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
