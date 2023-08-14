#include <stdio.h>
/**
 * main - entry of the code
 * Description: Print the sum of Even number from 2 to 100
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	int sum = 0;

	for (int num = 2; num <= 100; num+=2)
	{
		sum = sum + num;
		printf("current Even number: %d and current sum: %d\n", num, sum);
	}
		printf("\nThe sum of Even Numbers from 2 to 100 is: %d\n",sum);
	return (0);
}
