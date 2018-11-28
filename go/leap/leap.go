package leap

// IsLeapYear : checks if year is leap year or no
func IsLeapYear(year int) bool {
	if year%4 == 0 && !(year%100 == 0) {
		return true
	} else if year%400 == 0 {
		return true
	}

	return false
}
