#include "main.h"
#include <stdio.h>
/**
 * set_string - it copies a string to a double pointer
 * @s: the destination
 * @to: the source
 */
void set_string(char **s, char *to)
{
	/*int i;
	for (i = 0; *(to + i) != '\0'; i++)
	{
		*(*s + i) = *(to + i);
	}*/
	*s = to;
	(void)*s;
}
