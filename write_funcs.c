#include "main.h"
#include <unistd.h>

/**
  *_putchar - print standard output
  *@c: the input character
  *Return: 0
  */
int _putchar(char c)
{
	static char buf[1024];
	static int index;

	if (c == -1 || index >= 1024)
	{
		write(1, &buf, index);
		index = 0;
	}
	if (c != -1)
	{
		buf[index] = c;
		index++;
	}
	return (1);
}

/**
  *_puts -  print string to standard output
  *@str: ptr to string
  *Return:0
  */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
