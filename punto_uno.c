#include "holberton.h"
/**
 * _printchar - prints a character
 * @ap: The character to print, argument pointer
 *
 * Return: 1
 */
int _printchar(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
	
}
/**
 * _printstring - prints a string
 * @ap: The string to print, argument pointer
 *
 * Return: i
 */
int _printstring(va_list ap)
{
	char *s = va_arg(ap, char *);
	int i = 0;

	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		
	}
	return (i);
	
}
