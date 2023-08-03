#include "main.h"
/**
 * get_endianness - function to check machine
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *u = (char *) &e;

	return (*u);
}
