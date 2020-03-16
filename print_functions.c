#include "holberton.h"
/**
 * p_int - integer
 *@data: type data.
 *@buffer: the buffer
 *@size: the size of the array
 */
void p_int (va_list data, char *buffer, unsigned int *size)
{
	int m = va_arg(data, int), i = 0, n = m, tmp;

	while ((n / 10) > 0)
	{
		i++;
		n = (n / 10);
	}
	i++;
	tmp = i;
	while (i > 0)
	{
		buffer[*size + i - 1] = (m % 10) + '0';
		i--;
		m = (m / 10);
	}
	*size += tmp;
}
/**
 * p_char - characters
 * @data: type data
 * @buffer: pointer buffer.
 * @size: lenght.
 */
void p_char (va_list data, char *buffer, unsigned int *size)
{
	buffer[*size] = va_arg(data, int);
	*size += 1;
}
