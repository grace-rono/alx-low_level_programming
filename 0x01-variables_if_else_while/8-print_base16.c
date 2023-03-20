#include <stdio.h>
/**
  *main - prints out numbers of base 16
  *Return: returns 0
  */
int main(void)

{
	int a;
	char b;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
