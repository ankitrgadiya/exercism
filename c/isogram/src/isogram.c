#include "isogram.h"
#include <stdio.h>
#include <strings.h>
#include <ctype.h>

bool is_isogram(const char phrase[])
{
	if (phrase == NULL)
		return false;

	for (int i = 0; phrase[i]; i++) {
		if (isalpha(phrase[i]) && check(phrase, phrase[i])) {
				return false;
		}
	}
	return true;
}

bool check(const char phrase[], const char c)
{
	char *f_index, *l_rindex, *u_rindex;

	if (islower(c)) {
		f_index  = index(phrase, c);
		l_rindex = rindex(phrase, c);
		u_rindex = rindex(phrase, toupper(c));
	} else if (isupper(c)) {
		f_index  = index(phrase, c);
		l_rindex = rindex(phrase, tolower(c));
		u_rindex = rindex(phrase, c);
	} else {
		return false;
	}

	return ((l_rindex && f_index != l_rindex) ||
			(u_rindex && f_index != u_rindex));
}
