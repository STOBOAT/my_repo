#include <stdio.h>

/**
* main - Entry point of the program
* Description: A program that takes user input and
* prints "Positive" if the value is positive and "Negative Even"
* if the value is negative and an even number.
*
* Return: 0 (success)
*/

int main(void)
{
	int i;

	printf("Enter your number here: ");
	scanf("%d", &i);

	if (i < 0)
	{
		if ((i % 2) == 0)
		{
			printf("Negative Even\n");
		}
		else if ((i % 2) == -1)
		{
			printf("Negative odd\n");
		}
	}
	else
		{
			printf("Positive Value\n");
		}
	return (0);
}
