#include "main.h"
#include <unistd.h>
/**
 * _putchar -writes the character c to the standard output
 * @c: the char to print
 * Return: 1 if successful
 * On error, -1 is returned, and errno variable is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
