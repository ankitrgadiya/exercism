package acronym

import "strings"

// Abbreviate : Generates abbreviations for the given string
func Abbreviate(s string) string {
	split := strings.FieldsFunc(s,
		func(c rune) bool {
			return c == ' ' || c == '-'
		},
	)

	a := ""
	for _, w := range split {
		a += string(w[0])
	}

	return strings.ToUpper(a)
}
