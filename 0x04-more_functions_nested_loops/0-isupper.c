#include "main.h"
/**
 * _isupper - Checks for uppercase c
 * @c: The character to be checked.
 *
 * Return: 1 if character is upperca
 */
int _isupper(int c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  else
    return (0);
}
