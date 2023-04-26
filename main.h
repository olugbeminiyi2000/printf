#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
int _putinti(int value, int start);
int _putintd(int value, int start);
int _putstr(char *str);
int _putpercent(const char *pchar);

#endif
