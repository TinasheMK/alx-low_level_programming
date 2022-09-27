#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory
 * @dest: destination
 * @src: source
 * @n: number
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
