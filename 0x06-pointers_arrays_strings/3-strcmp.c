#include "main.h"
#include <string.h>
/**
 * _strcmp - like strcmp
 * @*s1: var pointer
 * @*s2: var pointer
 *
 * Return: int
 **/
int _strcmp(char *s1, char *s2)
{
	int ret;

	ret = strcmp(*s1, *s2);
	return (ret);
}
