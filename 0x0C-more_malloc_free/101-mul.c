#include <stdio.h>
#include <stdlib.h>
#include"main.h"
/**
 * main - main function
 * Return: Returns 0
 */

int main(void)
{
	int mu1, num1, num2;

	printf("enter num1: ");
		scanf("%d", &num1);
	printf("enter num2: ");
		scanf("%d", &num2);
	mu1 = num1 * num2;

	printf("the multiplication is: ") mu1;
	return (0);
}
