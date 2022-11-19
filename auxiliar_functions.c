#include "main.h"

/**
 * _strcmp - string compare
 *@s1: string to compare
 *@s2: against string to compare
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
return (strcmp(s1, s2));
}

/**
 * _strlen - string length
 *@s1: string to find length
 * Return: Always 0 (Success)
 */

unsigned int _strlen(char *s1)
{
return (strlen(s1));
}

/**
 * _strcpy - string copying
 *@dest: the destination to print
 *@src: the string source
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
return (strcpy(dest, src));
}

/**
 * _atoi - string to number
 *@s: the string to convert in number
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int sign, num;
	sign = 1;
	num = atoi(s);
	if (num == 0)
	{
		while (*s != '\0')
		{
			if (*s == '-')
			{
				sign = sign * (-1);
			}
			else if (*s >= '0' && *s <= '9')
			{
				num = (num * 10) + *s - '0';
			}
			else if (num > 0)
			{
				break;
			}
			s++;
		}
		num = num *sign;
		return (num);
	}
	else
	{
		return (num);
	}
}

/**
 * _strcat - string contatenation
 *@dest: the destination to print
 *@src: the string source
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}