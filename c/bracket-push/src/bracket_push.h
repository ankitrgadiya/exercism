#ifndef BRACKET_PUSH_H
#define BRACKET_PUSH_H

#define STACK_MAX 100

#include <stdbool.h>

bool is_paired(const char *string);

bool push(const char c);
char pop(void);
#endif
