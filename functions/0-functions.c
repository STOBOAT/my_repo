#include <stdio.h>

int addNumbers(int a, int b)
{
	int sum = a + b;

	return (sum);
}
int main(void)
{
	/*The 'result' becomes a variable to the values in addNumber funtion */

	  /* and at the same time the addNumber becomes a variable to the return 'sum'*/

	 /*so it automatically becomes like result = addNumbers(10, 90) = sum*/

	 /* so YOu automatically call sum when you call the function
	 */
	int result = addNumbers(10, 90);

	printf("The sum of %d + %d = %d\n", 10, 90, result);

	return (0);
}
