#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
*/
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	puts("\"Programming is like building a multilingual puzzle");

	write(2, str1, 59);
	return (1);
}

