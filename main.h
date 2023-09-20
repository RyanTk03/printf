#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

unsigned int _strlen(char *s);
char _get_type(char c);
int _printf(const char *format, ...);
char *_intToString(int i, unsigned int *len);
unsigned int intlen(int i);

#endif /* MAIN_H_INCLUDED */
