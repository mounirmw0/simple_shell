#include "shell.h"

/**
 * _copystr - copie a string
 * @str1: from first char 
 * @str2: to second char
 * @x: int
 * Return: char
 */

char *_copystr(char *str1, char *str2, int x)
{
	int y = 0;
	
	while (y < x && *(str2 + y))
        {
		*(str1 + y) = *(str2 + y);
		y++;
        }

        while (y < x)
        {
		*(str1 + y) = '\0';
		y++;
	}
	return (str1);
}

/**
 * _lenghtofstr -  string lenght
 * @str:char
 * Return:int
 */

int _strlen(char *str)
{
	int y;
	
	for (y = 0; str[y] != '\0'; y++)
	{
		continue;
	}
	return (y);
}
