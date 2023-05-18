#include "shell.h"
/**
 * view_divisor - viewing if str compare to any char
 * @v: character
 * @pr: to compare to
 * Return: 1/0
 */
unsigned int view_divisor(char v, const char *pr)
{
	unsigned int x = 0;

	while (pr[x] != '\0')
	{
		if (v == pr[x])
		{
			return (1);
		}
		x++;
	}
	return (0);
}

/**
 * _strdown - one 4 one
 * @str: one 4
 * @down: one
 * Return: pointer
 */
char *_strdown(char *str, const char *down)
{
	static char *a;
	unsigned int x = 0;
	static char *b;

	if (str != NULL)
		b = str;

	a = b;
	if (a == NULL)
		return (NULL);

	while (a[x] != '\0')
	{
		if (view_divisor(a[x], down) == 0)
			break;
		x++;
	}
	if (b[x] == '\0' || b[x] == '#')
	{
		b = NULL;
		return (NULL);
	}
	a = b + x;
	b = a;

	for (; b[x] != '\0'; x++)
	{
		if (view_dision(b[x], down) == 1)
			break;
	}
	if (b[x] == '\0')
		nt = NULL;
	else
	{
		b[x] = '\0';
		b += 1 + x;
		if (*b == '\0')
			b = NULL;
	}
	return (a)
}
