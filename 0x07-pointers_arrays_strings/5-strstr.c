#include "main.h"
#include <stddef.h>
/**
 * _strstr-locates a substring
 * @haystack:string to be searched
 * @needle:substring to be located
 * Return:char-pointer to the beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *one = haystack;
	char *two = needle;

	while (*one == *two && *two != '\0')
	{
	one++;
	two++;
	}
	if (*two == '\0')
	return (haystack);
	}
	return (NULL);
}
