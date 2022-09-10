#include <stdio.h>
/**
*main - put char
*Description: prints numbers
*Return: 0
*
*/
int main(void)
{
char c;
int n;
for (n = 0x0 ; n <= 0x9; n++)
{
putchar(48 + n);
};
for (c = 'a'; n <= 'f'; n++)
{
putchar(c);
};
putchar('\n');
return (0);
}
