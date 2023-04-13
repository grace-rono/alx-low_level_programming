#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: Returns 0
 */

int main(void)
{
	unsigned int mu1, num1, num2;

	printf("enter num1: ");
		scanf("%d", &num1);
	printf("enter num2: ");
		sacnf("%d", &num2);
	mu1 = num1 * num2;

	printf("the multiplication of %d and %d is %d", num1, num2, mu1);
	return (0);
}
