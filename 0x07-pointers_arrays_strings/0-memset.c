#include "main.h"
#include <string.h>
/**
 * _memset - set constant byte to memory
 * @s: char
 * @b: char
 * @n: number
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
