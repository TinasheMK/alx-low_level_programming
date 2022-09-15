/**
 * _isalpha- alpha letter
 * Description: To prin alpha letters
 * Return: alpha or not
 */
int _isalpha(int c)
{
int alpha;
if (c >= 'A' && c <= 'Z')
{
	alpha = 1;
}
else if (c >= 'a' && c <= 'z')
{
	alpha = 1;
}
else
{
	alpha = 0;
}
return (alpha);
}
