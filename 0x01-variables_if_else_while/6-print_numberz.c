#include <stdio.h>

/**
 * main - Strting point
 * Description:  a program that prints all single digit numbers
 *  of base 10 starting from 0, followed by a new line
 *  Return: Always (0) (Successful)
*/

int main(void)
{
	int c;

	c = 0;
	while
		(c < 10) {
			putchar(c + '0');
			c++;
		}
	putchar('\n');
	return (0);
}	
