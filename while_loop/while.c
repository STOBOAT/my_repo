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
		printf("%c\n", alpha);
		alpha++;
	}
	return (0);
}
