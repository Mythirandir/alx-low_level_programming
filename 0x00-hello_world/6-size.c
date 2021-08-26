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

	printf("Size of a char %lu byte(s) \n", sizeof(i));
	printf("Size of an int %lu byte(s)\n", sizeof(d));
	printf("Size of a long int %lu byte(s)\n", sizeof(e));
	printf("Size of long long int = %lu bytes\n", sizeof(g));
	printf("Size of float = %lu bytes\n", sizeof(f);
}
