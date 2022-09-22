#include "main.h"
#include <string.h>
/**
 * *_strcat - appends src
 * @dest: var
 * @src: var
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	dest = strncat(dest, src, 500);
	return (dest);
}
