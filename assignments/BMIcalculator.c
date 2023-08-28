#include<stdio.h>

/**
 * main - Entry point of the code
 * Description: A program to calculate the BMI of a user
 * 
 * Return - 0 (success)
 */
int main(void)
{
	double height, weight;

	/*double BMI = weight/meterSquare;*/

	printf("What is your weight (in kilograms) = ");
	scanf("%lf", &weight);

	printf("What is your height (in meters) = ");
	scanf("%lf", &height);

	double meterSquare = (height * height);
	double BMI = weight/meterSquare;

	if (BMI < 18)
	{
		printf("Your BMI is %.2lf & you are UNDERWEIGHT\n", BMI);
	}
	else if (BMI >= 18 && BMI <= 25)
	{
		printf("Your BMI is %.2lf and your weight is NORMAL\n", BMI);
	}
	else if (BMI >= 26 && BMI <= 29)
	{
		printf("Your BMI is %.2lf & you are OVERWEIGHT\n", BMI);
	}
	else if (BMI >= 30 && BMI <=34)
	{
		printf("Your BMI is %.2lf & you've got CLASS I OBESITY\n", BMI);
	}
	else if (BMI >=35 && BMI <= 39)
	{
		printf("Your BMI is %.2lf & you've got CLASS II OBESITY\n", BMI);
	}
	else if (BMI >= 40)
	{
		printf("Your BMI is %.2lf & you've got CLASS III OBESITY\n", BMI);
	}
	else 
	{
		printf("Invalid Input/s\n");
	}
	return (0);
}
