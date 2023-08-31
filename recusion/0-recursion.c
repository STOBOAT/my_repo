#include <stdio.h>

/**
 * collatz - Recursive Collatz sequence function
 * @n: The number to start the sequence from
 *
 * Return: The number of steps to reach 1 in the Collatz sequenceOA
 */

int collatz(int n)
{
	if (n == 1)
	{
		return (0);
	}
	else if ((n % 2) == 0)
	{
		return (1 + collatz(n / 2));
	}
	else
	{
		return (1 + collatz(3 * n + 1));
	}
}

/**
 * main -Entry point of the program
 *
 * Return: 0 (success)
 */
int main(void)
{
	int x;

	printf("Input the number: ");
	scanf("%d", &x);

	printf("%d\n", collatz(x));
	return (0);
}
