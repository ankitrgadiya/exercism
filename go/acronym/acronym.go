package acronym

import (
	"strings"
	"unicode"
)

// Abbreviate : Generates abbreviations for the given string
func Abbreviate(s string) (a string) {
	newWord := true
	for _, c := range s {
		if !unicode.IsLetter(rune(c)) {
			newWord = true
			continue
		}
		if newWord {
			a += string(c)
			newWord = false
		}
	}

	return strings.ToUpper(a)
}
