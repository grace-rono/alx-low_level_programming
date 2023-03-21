#include <stdio.h>
/**
  *main - alphabetic characters in reverse order
  *Return: returns 0
  */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar (alph);
	putchar('\n');
	return (0);
}
