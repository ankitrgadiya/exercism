package acronym

import (
	"strings"
	"unicode"
)

// Abbreviate : Generates abbreviations for the given string
func Abbreviate(s string) (abbrev string) {
	newWord := true
	for _, c := range s {
		if !unicode.IsLetter(rune(c)) {
			newWord = true
			continue
		}
		if newWord {
			abbrev += string(c)
			newWord = false
		}
	}

	return strings.ToUpper(abbrev)
}
