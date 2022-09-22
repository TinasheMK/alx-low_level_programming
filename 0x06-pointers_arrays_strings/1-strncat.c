#include "main.h"
#include <string.h>
/**
 * *_strncat - concat n
 * @*dest: str
 * @*src: var
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest;
	*dest = strcat(*dest, src, n);
	return (*dest);
}
