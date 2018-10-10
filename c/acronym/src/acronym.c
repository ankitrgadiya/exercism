#include "acronym.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char *abbreviate(const char *phrase)
{
	if (!phrase || strlen(phrase) == 0)
		return NULL;

	char *acrn = (char *) malloc(sizeof(char) * 24);
	int in_word = 0;

	for (int i = 0, j = 0; phrase[i]; i++) {
		if (in_word && (isblank(phrase[i]) || phrase[i] == '-')) {
			in_word = 0;
		} else if (!in_word && isalpha(phrase[i])) {
			in_word = 1;
			acrn[j++] = toupper(phrase[i]);
		}
	}

	return acrn;
}
