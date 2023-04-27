#include <stdio.h>

void last(void) __attribute__ ((constructor));
/**
 * last - outputs a string before
 * function is executed
 */
void last(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
