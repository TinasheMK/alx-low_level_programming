#include "main.h"
#include <string.h>
/**
 * _strpbrk -main
 * @s: string
 * @accept: accept
 *
 * Return: result
 */
char *_strpbrk(char *s, char *accept)
{
	char *x;

	x = strpbrk(s, accept);
	return (x);
}
