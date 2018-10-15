#include "pangram.h"
#include <ctype.h>
#include <strings.h>

bool is_pangram(const char *sentence)
{
	if (!sentence)
		return false;

	for (int c = 'a'; c <= 'z'; c++) {
		if (!index(sentence, c) && !index(sentence, toupper(c)))
			return false;
	}

	return true;
}
