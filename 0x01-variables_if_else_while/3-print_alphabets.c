#include <stdio.h>

/**
 * main - Starting point
 * Description: Prints the alphabet in lowercase, and then
 * in uppercase, followed by a new line.
 * Return: (0) (Successful)
*/

int main(void)
{
int ch;
for (ch = "A"; ch <= "Z"; ch++)
{
	putchar(ch);
}
for (ch = "a"; ch <= "z"; ch++)
{
	putchar(ch);
	putchar("\n");
}
return (0);

}
