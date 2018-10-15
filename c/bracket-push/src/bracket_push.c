#include "bracket_push.h"
#include <stdio.h>

char stack[STACK_MAX];
int top;

bool is_paired(const char *string)
{
	top = -1;

	int c = 0;
	while(string[c]) {
		switch(string[c]) {
		case '[':
		case '{':
		case '(':
			if (!push(string[c])) {
				return false;
			}
			break;
		case ']':
			if ('[' != pop())
				return false;
			break;
		case '}':
			if ('{' != pop())
				return false;
			break;
		case ')':
			if ('(' != pop())
				return false;
			break;
		}
		c++;
	}

	return top == -1;
}

bool push(const char c)
{
	if (top < STACK_MAX) {
		stack[++top] = c;
		return true;
	}

	return false;
}

char pop(void)
{
	if (top >= 0)
		return stack[top--];
	else
		return '0';
}
