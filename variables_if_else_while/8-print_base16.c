#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; low++)
		putchar(d);
	for (low = 'a'; low  <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
