#include "main.h"

/**
 * _strlen_recursion - print string length
 * @s: pointer to char
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{

		retun 0;
	}
	return (1 + _strlen_recursion(s++));
}
