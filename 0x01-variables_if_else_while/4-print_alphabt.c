#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphapet letters except 'q' and 'e'
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
