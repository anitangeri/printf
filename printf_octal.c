#include "main.h"
/**
* print_octal - unsigned int argument is converted to unsigned octal
* @o: unsigned to be converted
* Descriptions: prints unsigned octal
* Return: size the output
*/
int print_octal(va_list o)
{
	unsigned int len, pow_ten, j, digit, k, num;
	int count = 0;

	k = va_arg(o, unsigned int);
	if (k != 0)
	{
		num = k;
		len = 0;
		while (num != 0)
		{
			num /= 8;
			len++;
		}
		pow_ten = 1;
		for (j = 1; j <= len - 1; j++)
			pow_ten *= 8;
		for (j = 1; j <= len; j++)
		{
			digit = k / pow_ten;
			_putchar(digit + '0');
			count++;
			k -= digit * pow_ten;
			pow_ten /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
