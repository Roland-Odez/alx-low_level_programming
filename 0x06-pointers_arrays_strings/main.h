#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: stringto append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenate n number of string character
 * @dest: destination pointer 
 * @src: pointer to append
 * @n: n number of character to concatenate
 * Return: concatenate string
 */

char *_strncat(char *dest, char *src, int n);
#endif
