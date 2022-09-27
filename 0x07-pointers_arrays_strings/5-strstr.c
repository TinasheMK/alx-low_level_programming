#include "main.h"
#include <string.h>
/**
 * _strstr - main
 * @haystack: char
 * @needle: need
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *x;

	x = strstr(haystack, needle);
	return (x);
}
