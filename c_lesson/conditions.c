#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int totalGrade = 51;

	if (totalGrade >= 80)
	{
		printf("You are admitted at PRESEC\n");
	}
	else if (totalGrade >= 60 && totalGrade <= 79)
	{
		printf("You are admitted at KUMACA\n");
	}
	else
	{
		printf("You are admitted at TOSS\n");
	}
	return (0);
}
