#include "holberton.h"
/**
 * p_int - integer
 *@data: type data.
 *@buffer: the buffer
 *@size: the size of the array
 */
void p_int(va_list data, char *buffer, unsigned int *size)
{
	long int m = va_arg(data, int), i = 0, n = m, tmp;

	if (m < 0)
	{
		m *= -1;
		buffer[*size]= '-';
		*size += 1;
	}

	while (n / 10)
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
void p_char(va_list data, char *buffer, unsigned int *size)
{
	buffer[*size] = va_arg(data, int);
	*size += 1;
}
/**
 * p_dec - integer
 *@data: type data.
 *@buffer: the buffer
 *@size: the size of the array
 */
void p_dec(va_list data, char *buffer, unsigned int *size)
{
	long int m = va_arg(data, int), i = 0, n = m, tmp;

	if (m < 0)
	{
		m *= -1;
		buffer[*size]= '-';
		*size += 1;
	}

	while (n / 10)
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
 * p_str - integer
 *@data: type data.
 *@buffer: the buffer
 *@size: the size of the array
 */
void p_str(va_list data, char *buffer, unsigned int *size)
{
	int cnt = 0;
	char *contain = va_arg(data, char*);

	if (contain == NULL)
		contain = "(null)";
	for (; contain[cnt]; cnt++)
	{
		buffer[*size] = contain[cnt];
		*size += 1;
	}
}
/**
 * p_por - integer
 *@data: type data
 *@buffer: the buffer
 *@size: the size of the array
 */
void p_por(va_list data, char *buffer, unsigned int *size)
{
	(void)data;
	buffer[*size] = '%';
	*size += 1;
}
