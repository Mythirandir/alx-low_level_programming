#include <stdio.h>
/**
 * main - prints out the alphabet in lowercase and then uppercase
 * Description: Taking up arms against alphabets
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	a = 'A';
	while (a <= 'Z')
	{

		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
