#include <stdio.h>
/**
*main - put char
*Description: prints numbers
*Return: 0
*
*/
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(48 + n);
if (n != 9)
{
putchar(',');
putchar(' ');
}
};
putchar('\n');
return (0);
}
