#include "main.h"
/**
 * get_endianness - function to check machine
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int w = 1;
	char *p = (char *) &w;

	return (*p);
}
