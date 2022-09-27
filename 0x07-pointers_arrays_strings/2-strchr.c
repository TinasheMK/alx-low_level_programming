#include "main.h"
#include <string.h>
/**
 * _strchr - prototype
 * @s: the char
 * @c: the string
 * 
 * Return: ref to c
 */
char *_strchr(char *s, char c)
{
	char x;

	x = strchr(s, c);
	return (x);
}
