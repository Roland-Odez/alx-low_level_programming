#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard outpu
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _memset - fill n bytes of memory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copy n bytes of memory from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locate 1st occurrence of character in string and returns pointer 
 * @s: string to search
 * @c: target character
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c);

/**
* _strspn - return length of string that matches values consistently
* @s: string to search
* @accept: target matches
* Return: number of bytes consecutively matched
*/

unsigned int _strspn(char *s, char *accept);

#endif
