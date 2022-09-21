#include "main.h"
#include <stdio.h>

/**
 * puts2 - one of two chars printed
 * @str: chars
 *
 */
void puts2(char *str)
{
	int i, j = 0;

while (*str != '\0') {
i++;
str++;
}
putchar(i);
	while (j < i)
	{
		putchar(str[j]);
		j = j + 2;
	}
	putchar('\n');
}
