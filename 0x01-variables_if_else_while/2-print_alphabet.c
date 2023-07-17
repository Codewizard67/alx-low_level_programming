#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry  point
 *
 * Return: Always 0  (success)
 */
int main(void)
{
int alphabets = 'a';
while (alphabets <= 'z')
{
putchar(alphabets);
alphabets += 1;
}
putchar('\n');
return (0);
}

