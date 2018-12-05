package acronym

import (
	"strings"
	"unicode"
)

// Abbreviate : Generates abbreviations for the given string
func Abbreviate(s string) string {
	a := ""
	letter := true
	for _, c := range s {
		if letter && unicode.IsLetter(rune(c)) {
			a += string(c)
			letter = false
		} else if !unicode.IsLetter(rune(c)) {
			letter = true
		}
	}

	return strings.ToUpper(a)
}
