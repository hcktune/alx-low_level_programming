#ifndef FUNC_PTR_H
#define FUNC_PTR_H

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

#endif /* FUNC_PTR_H */
