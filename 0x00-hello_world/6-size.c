#include <stdio.h>
/**
* main - main function
* Return: returns 0
*/
int main(void)
{
	int int_type;
	char char_type;
	float float_type;
	long int long_int_type;
	long long int lng_lng_int;

	printf("size of a char: %zu byte(s)\n", sizeof(char_type));
	printf("size of an int: %zu byte(s)\n", sizeof(int_type));
	printf("size of a long int: %zu byte(s)\n", sizeof(long_int_type));
	printf("size of a long long int: %zu byte(s)\n", sizeof(lng_lng_int));
	printf("size of a float: %zu byte(s)\n", sizeof(float_type));
	printf("\n");
	return (0);
}
