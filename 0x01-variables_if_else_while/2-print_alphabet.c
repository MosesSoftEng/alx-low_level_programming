#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase,
 *
 * Description: Program that prints the alphabet in lowercase,
 * followed by a new line. Prints alphabets from the ANSI
 * character set.
 * Return: Always 0
 */
int main(void)
{
	int ansi_number;

	ansi_number = 'a';
	while (ansi_number < '{')
	{
		putchar(ansi_number);
		ansi_number++;
	}

	putchar('\n');
	return (0);
}
