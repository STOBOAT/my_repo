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

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
		continue;
		}
		printf("%d\n", i);
		i++;
	}
	return (0);
}
