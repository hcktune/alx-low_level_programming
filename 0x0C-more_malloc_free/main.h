#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void *malloc_checked(unsigned int s);
char *string_nconcat(char *str1, char *str2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
#endif /* MAIN_H */
