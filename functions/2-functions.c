#include <stdio.h>
#include <math.h>

/**
 * main - Entry point ofr the code
 * Description - Program that computes the result of a number raised to the
 *	power of the square root of the number.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int input;
	double rootResult, powerofInput;

	printf("Enter your number here: ");
	scanf("%d", &input);
	
	rootResult = sqrt(input);
	powerofInput = pow(input, rootResult);

	printf("The Square root of your number is: %lf\n", rootResult);
	/*This prints out the square root of the users input*/
	printf("Your number %d to the power %lf is %lf\n"
			, input, rootResult, powerofInput);

	return (0);
}
