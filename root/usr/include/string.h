/*	STRING.H -	Specific Modit! implementation of the cstd library file string.h
 *
 *	Author: Crupette
 * */

#ifndef STRING_H
#define STRING_H 1

#include <stdint.h>
#include <stddef.h>

/*	Standard method in the C library. finds length of a NULL-terminated string
 * */
size_t strlen(const char *s);

/*	Standard method in the C library. compares two strings. returns 0 if strings are the same
 * */
int strcmp(const char *s1, const char *s2);

/*	Checks if string [hs] contains full string [n]
 * */
char *strstr(const char *hs, const char *n);

/*	Copies a string from [src] to [dest]
 * */
char *strcpy(char *dest, const char *src);

#endif
