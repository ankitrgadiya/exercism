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
		if (isalpha(phrase[i]) &&
			check_recurrence(phrase + i + 1, phrase[i])) {
				return false;
		}
	}
	return true;
}

bool check_recurrence(const char phrase[], const char c)
{
	return (index(phrase, tolower(c)) || index(phrase, toupper(c)));
}
