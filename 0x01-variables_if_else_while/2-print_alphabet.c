#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 * Description: 'A program that prints the alphabet in lowercase.'
 * Return: Always 0.
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
