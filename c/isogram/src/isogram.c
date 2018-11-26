#include "isogram.h"
#include <stdio.h>
#include <strings.h>
#include <ctype.h>

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
	char *first, *lowercase, *uppercase;

	first  = index(phrase, c);
	lowercase = rindex(phrase, tolower(c));
	uppercase = rindex(phrase, toupper(c));

	return ((lowercase && first != lowercase) ||
			(uppercase && first != uppercase));
}
