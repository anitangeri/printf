#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
* print_bin - convert to binary
* @b: number in decinal
* Return: number of chars printed
*/
int print_bin(va_list b)
{
	unsigned int len, pow_ten, j, digit, k, num;
	int count = 0;

	k = va_arg(b, unsigned int);
	if (k != 0)
	{
		num = k;
		len = 0;
		while (num != 0)
		{
			num /= 2;
			len++;
		}
		pow_ten = 1;
		for (j = 1; j <= len - 1; j++)
			pow_ten *= 2;
		for (j = 1; j <= len; j++)
		{
			digit = k / pow_ten;
			_putchar(digit + '0');
			count++;
			k -= digit * pow_ten;
			pow_ten /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
