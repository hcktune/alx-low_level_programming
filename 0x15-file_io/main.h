#ifndef __MAIN_H
#define __MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stddef.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
