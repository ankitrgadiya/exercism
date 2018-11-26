package leap

// IsLeapYear : checks if year is leap year or no
func IsLeapYear(year int) bool {
	return (year % 4 == 0 && !(year % 100 == 0)) || (year % 400 == 0)
}
