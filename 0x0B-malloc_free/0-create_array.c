#include "main.h"
/**
 * create_array - array for prints a string
 * @size: number elements array
 * @c: character to be initialized
 *
 * Return:array
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
		return (NULL);
	buffer = (char *)malloc(size * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
