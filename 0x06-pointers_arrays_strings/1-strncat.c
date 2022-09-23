#include "main.h"
#include <string.h>
/**
 * *_strncat - concat n
 * @dest: str
 * @src: var
 * @n: number of cat
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	return (dest);
}
