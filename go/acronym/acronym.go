package acronym

import "strings"

// Abbreviate : Generates abbreviations for the given string
func Abbreviate(s string) string {
	s = strings.Replace(s, "-", " ", -1)
	split := strings.Fields(s)

	a := ""
	for _, w := range split {
		if w != "" {
			a += string(w[0])
		}
	}

	return strings.ToUpper(a)
}
