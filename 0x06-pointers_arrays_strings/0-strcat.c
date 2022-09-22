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
	char *dest;

	*dest = strncat(*dest,src, 1);	
	return (*dest);
}
