#include <stdio.h>

/**
 * main - main function with be printing the full alphabets
 * Description: a..z
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

	putchar('\n');
	return (0);
}
