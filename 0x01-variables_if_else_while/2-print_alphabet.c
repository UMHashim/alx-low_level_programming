#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in the varianle n
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	/* this is an ASCII code for new line */

	return (0);
}
