#include "main.h"

/**
* _strchr - a function that locates a character in a string.
* @s: an input string to be searched
* @c: an input character to be located
* Return: returns pointer to c position if found
*         if c is not found - NULL.
*/
char *_strchr(char *s, char c)
{
int index;
for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}
return ('\0');
}
