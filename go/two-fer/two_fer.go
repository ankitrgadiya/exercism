package twofer

import "fmt"

// ShareWith : prints a message "share with" message
func ShareWith(name string) string {
	if name == "" {
		name = "you"
	}

	return fmt.Sprintf("One for %s, one for me.", name)
}
