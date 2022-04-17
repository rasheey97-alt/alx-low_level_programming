#include "main.h"
/**
 *print_number - that prints an integer
 *@n: print int
 *
 *Return: Always 0.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	if(n > 9)
	{
		_putchar((n/10) + '0');
	}

	_putchar((n%10) + '0');

}
