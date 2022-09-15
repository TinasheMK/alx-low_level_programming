#include <unistd.h>
/**
 * print_alphabet_x10 - print twice
 * Return: 0
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int n = 1;
while (n <= 10)
{
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
	write(1, "\n", 1);
	n++;
	letter = 'a';
}
}
