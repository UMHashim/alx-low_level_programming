#include "main.h"
#include <unistd.h>
/**
 * main - program that print putchar
 *
 * Return: 1 on success
 */
int main(void)

	int _putchar(char c)
{

return (write(1, &c, 1));
}

