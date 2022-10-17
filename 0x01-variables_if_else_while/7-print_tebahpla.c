#include <stdio.h>
/**
 * main - Starting point
 * Description: a program that prints the lowercase
 * alphabet in reverse, followed by a new line
 * Return: (0) (Successful)
*/

int main(void)
{
	char c;

	c = 'z';
	while
		(c >= 'a') {
			putchar(c);
			c--;
		}
	putchar('\n');
	return (0);
}
