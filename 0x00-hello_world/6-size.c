#include <stdio.h>
/**
 * main - will return the size of different types of variables
 * Description: the main function will be using the "printf" function to print out the sizes, and the "sizeof" to print the siz
 * Return: will be 0
 */
int main(void)
{
	printf("Size of a char %d byte(s) \n", sizeof(char));
	printf("Size of an int %d byte(s)\n", sizeof(int));
	printf("Size of a long int %d byte(s)\n", sizeof(long int));
	printf("Size of long long int %d bytes\n", sizeof(long long int));
	printf("Size of float %d bytes\n", sizeof(float));
	return (0);
}
