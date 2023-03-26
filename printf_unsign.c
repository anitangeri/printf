#include "main.h"
/**
* print_unsig - function that prints unsigned number
* @u: unsigned number
* Descriptions: prints unsigned number with putchar
* Return: size the output
*/
int print_unsig(va_list u)
{
	unsigned int len, pow_ten, j, digit, k, num;
	int count = 0;

	k = va_arg(u, unsigned int);
	if (k != 0)
	{
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
