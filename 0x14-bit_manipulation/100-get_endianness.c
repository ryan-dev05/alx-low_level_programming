#include "main.h"
/**
 * get_endianness - function to check machine
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *t = (char *) &y;

	return (*t);
}
