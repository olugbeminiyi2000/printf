#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _cstrlen(const char *s);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(char);
int recursion_int(int value);

#endif
