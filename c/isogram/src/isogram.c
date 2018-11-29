#include "isogram.h"
#include <stdio.h>
#include <strings.h>
#include <ctype.h>

bool check_recurrence(const char phrase[], int c);

bool is_isogram(const char phrase[])
{
	if (phrase == NULL)
		return false;

	for (int i = 0; phrase[i]; i++) {
		if (isalpha(phrase[i]) && check_recurrence(phrase, i)) {
				return false;
		}
	}
	return true;
}

bool check_recurrence(const char phrase[], int c)
{
	return (index(phrase + c + 1, tolower(phrase[c]))
			|| index(phrase + c + 1, toupper(phrase[c])));
}
