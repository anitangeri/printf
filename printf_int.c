#include "main.h"
/**
* print_int - function that prints an integer
* @i: integer to print
* Descriptions: prints digit with _putchar
* Return: size the output text
*/
int print_int(va_list i)
{
	int len, pow_ten, j, digit, k, count = 0, num;

	k = va_arg(i, int);
	if (k != 0)
	{
		if (k < 0)
		{
			_putchar('-');
			count++;
		}
		num = k;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		pow_ten = 1;
		for (j = 1; j <= len - 1; j++)
			pow_ten *= 10;
		for (j = 1; j <= len; j++)
		{
			digit = k / pow_ten;
			if (k < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			count++;
			k -= digit * pow_ten;
			pow_ten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
