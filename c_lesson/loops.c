#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
/*	for (int i = 0; i < 10; i++)
*	{
*		printf("%d \n", i);
*	}
*
*	int number = 6;
*	int random_value = 0;
*	int count =0;
*
*	srand(time(NULL));
*	while (random_value != number)
*	{
*		printf("%d\n", random_value);
*		count++;
*		random_value = rand() % 10;
*	}
*/
	srand(time(NULL));
	int random_value = 0;
	int count = 0;
	int number = 8;

	do {
		printf("%d\n", random_value);
		count++;
		random_value = rand() % 10;
	} while (random_value != number);
	printf("===========\n%d\n", count);
	return (0);
}
