#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting point
 * Description: Prints lowercase alphabets in c
 * Return: return (0) (Successful)
*/
int main(void)
{
	char c;

	c = 'a';

	while
		(c <= 'z') {

			putchar(c);

			c++;
		}

	putchar('\n');

	return (0);

}
