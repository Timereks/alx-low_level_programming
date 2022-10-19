#include "main.h"

/**
 * _abs - computs absolute value of an integer
 * @int: integer
 * Return: 0
 */
int _abs(int)
{
	int e;

	e = _abs(-1);
		_putchar("%d\n", e);
	e = _abs(0);
		_putchars("%d\n", e);
	e = _abs(1);
		_putchar("%d\n", e);
	e = _abs(-98);
		_putchar("%d\n", e);
		return (0);
}
