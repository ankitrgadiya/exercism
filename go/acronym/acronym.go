package acronym

import "strings"

// Abbreviate : Generates abbreviations for the given string
func Abbreviate(s string) string {
	s = strings.TrimSpace(s)
	s = strings.Replace(s, "-", " ", -1)

	split := strings.Split(s, " ")
	if len(split) == 0 {
		return ""
	}

	a := ""
	for _, w := range split {
		a += string(w[0])
	}

	return strings.ToUpper(a)
}
