#include <stdio.h>
/**
 * main - point of program entry
 * Description: A program that runs if input
 *	is positive and breaks if it's negative
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i = 0;

	printf("Enter your number: ");
	scanf("%d", &i);

	while (i < 0)
	{
		break;
	}
	if (i >= 0)
	{
		printf("You entered a Positive number\n");
	}
	return (0);
}
