#include <stdio.h>

int main(void)
{
	int i = 1;
	int end = 100;

	for (i; i <= end; i++)
	{
		if (i % 3 == 0 &&  i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
