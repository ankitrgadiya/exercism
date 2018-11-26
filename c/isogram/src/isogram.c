#include "isogram.h"
#include <stdio.h>
#include <strings.h>
#include <ctype.h>

bool check_recurrence(const char phrase[], const char c);

bool is_isogram(const char phrase[])
{
	if (phrase == NULL)
		return false;

	for (int i = 0; phrase[i]; i++) {
		if (isalpha(phrase[i]) && check_recurrence(phrase, phrase[i])) {
				return false;
		}
	}
	return true;
}

bool check_recurrence(const char phrase[], const char c)
{
	char *first_index, *last_lowercase_index;

	first_index  = index(phrase, c);
	last_lowercase_index = rindex(phrase, tolower(c));

	return (last_lowercase_index && first_index != last_lowercase_index);
}
