package space

// Planet : A type to store Planets
type Planet string

// Age : Calculates age on given planet
func Age(s float64, p Planet) float64 {
	switch p {
	case "Mercury":
		return s / 7600543.81
	case "Venus":
		return s / 19414149.05
	case "Mars":
		return s / 59354032.69
	case "Jupiter":
		return s / 374355659.12
	case "Saturn":
		return s / 929292362.88
	case "Uranus":
		return s / 2651370019.32
	case "Neptune":
		return s / 5200418560.03
	case "Earth":
		return s / 31557600
	default:
		return s / 31557600
	}
}
