#include <stdio.h>
/**
*main - put char
*Description: prints alphabet
*Return: 0
*
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
putchar(ch);
};
putchar('\n');
return (0);
}
