#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
	_putchar(b);
	}
	_putchar('\n');
}
