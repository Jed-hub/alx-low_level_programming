#include <stdio.h>

/**
 * pre_main - prints a text before the main function
 */
void __attribute__ ((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
