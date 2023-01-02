#include "main.h"
/**
 * set_string - it copies a string to a double pointer
 * @s: the destination
 * @to: the source
 */
void set_string(char **s, char *to)
{
	*s = to;
	(void)*s;
}
