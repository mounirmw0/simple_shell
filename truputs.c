#include "shell.h"
/**
 * _astrue - convert to a int
 * @str: string
 * Return:int
 */
int _astrue(char *str)
{
	int a, b, x, y;

	a = 0;
	x = 0;
	y = 1;

	while ((str[a] < '0' || str[a] > '9') && (str[a] != '\0'))
	{
		if (str[a] == '-')
			y *= -1;
		a++;
	}
	b = a;

	while ((str[b] >= '0') && (str[b] <= '9'))
	{
		x = (x * 10) + y * ((str[b]) - '0');
		b++;
	}
	return (x);
}
/**
 * _putts - print a string
 * @s:pointer char
 * return:void
 */
void _putts(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		_putchar(s[x]);
_putchar('\n');
return;
