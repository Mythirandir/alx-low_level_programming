#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/** more headers goes there
 * main - Main function working
 *Description: Positive or negative numbers
 *Return: 0
 * betty style doc for function main goes there 
 */
int main(void)
{
	int n=1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
