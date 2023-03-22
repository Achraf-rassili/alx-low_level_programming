#include "main.h"

/**
 * _isalpha - checks for an alphabetic character
 * @c: the character to be checked
 * 
 * Return: 1 if c is an alphabetic character, 0 otherwise
 * 
 * Description:
 * This function checks if the given character is an alphabetic character.
 * Alphabetic characters are defined as either uppercase or lowercase letters.
 */
int _isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
