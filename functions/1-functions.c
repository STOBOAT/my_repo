#include <stdio.h>

/**
 * main - Entry point ofr the code
 * Description - Function to multiply numbers and display the results
 * multiplyNumbers - A funtion to multiply two numbers
 * @a: the value of a
 * @b: the value of b
 *
 * Return: value
 */

int multiplyNumbers(int a, int b)
{
	int value = (a * b);

	return (value);
}

int main(void)
{
	int result = multiplyNumbers(11, 8);

	printf("The Value of %d * %d = %d\n", 11, 8, result);

	return (0);
}
