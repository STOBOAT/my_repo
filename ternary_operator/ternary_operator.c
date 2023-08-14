#include <stdio.h>
/**
 * main - entry point of the proggram
 * Description: A program that prints "The number is Odd"
 *	for odd numbers and "The number is Even"
 *	for Even numbers
 * Return: 0 Success
 */
int main(void)
{
	/*input refers to the number that would be taken from the user*/
	int input;

	printf("Enter your number here = ");
	scanf("%d", &input);

	/*the ternary operator is ? and :*/
	(input % 2 == 0) ?
		printf("The number is Even\n") :
		printf("The number is Odd\n");

	return (0);
}
