#include <stdio.h>
/**
 * main - entry of the code
 * Description: Print the sum of integers from 1 to 100
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	int sum = 0;

	for (int num = 1; num <= 100; num++)
	{
		sum = sum + num;
		printf("current number: %d and current sum: %d\n", num, sum);
	}
		printf("\nThe sum of integers from 1 to 100 is: %d\n",sum);
	return (0);
}
