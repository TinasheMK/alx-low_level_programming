/**
 * _islower - slower
 * @c: letter value
 * Return: num
 */

int _islower(int c)
{
int num;
if (c <= 'a' && c >= 'z')
{
	num = 0;
}
else
{
	num = 1;
}
return (num);
}
