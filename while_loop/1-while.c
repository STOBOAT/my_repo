#include <stdio.h>
/**
* main - entry point of the code
* Description: Prints the alphabets using while loop
*
* Return: 0 (success)
*/
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'a' || alpha == 'e' || alpha == 'i' ||
				alpha == 'o' || alpha == 'u')
			alpha++;
		printf("%c\n", alpha);
		alpha++;
	}
	return (0);
}
