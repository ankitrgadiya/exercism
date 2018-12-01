package acronym

import "strings"

// Abbreviate : Generates abbreviations for the given string
func Abbreviate(s string) string {
	s = strings.TrimSpace(s)
	if s == "" {
		return ""
	}
	s = strings.Replace(s, "-", " ", -1)
	if s == "" {
		return ""
	}

	split := strings.Split(s, " ")
	if len(split) == 0 {
		return ""
	}

	a := ""
	for _, w := range split {
		if w != "" {
			a += string(w[0])
		}
	}

	return strings.ToUpper(a)
}
