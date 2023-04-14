#include <stdio.h>
/**
 * main - prints all arguments passed on the command line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
