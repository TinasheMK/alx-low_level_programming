#include "main.h"
#include <string.h>
/**
 * _strspn - lenght
 * @s: string
 * @accept: yes
 *
 * Return: the length
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;

	x = strspn(s, accept);
	return (x);
}
