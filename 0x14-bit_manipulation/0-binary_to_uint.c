#include "main.h"
/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: pointer of a char to convert
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;
	char newb;
	int len = strlen(b);
	int multi = 1;

	if (b == NULL)
	{
		return (0);
	}
	for (i = len - 1; i >= 0; i--)
	{
		newb = b[i];
			if (newb == '1')
			{
				res += multi;
			}
			multi = multi * 2;
	}
	return (res);
}
