#include <stdio.h>
/**
 * main - will return the size of different types of variables
 * Description: the main function will be using the "printf" function to print out the sizes, and the "sizeof" to print the siz
 * Return: will be 0
 */
int main(void)
{
	char i;
	int d;
	long int e;
	long long int g;
	float f;

	printf("Size of a char %zu byte(s) \n", sizeof(i));
	printf("Size of an int %zu byte(s)\n", sizeof(d));
	printf("Size of a long int %zu byte(s)\n", sizeof(e));
	printf("Size of long long int = %zu bytes\n", sizeof(g));
	printf("Size of float = %zu bytes\n", sizeof(f);
}
