#include <stdio.h>
/**
 * main - Starting point
 * Description: a C program that prints the alphabet in lowercase, followed by a new line
 * Return: Always (0) (Sucessful)
*/

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
		putchar('\n');
		return (0);
}


