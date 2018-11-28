package space

// Planet : A type to store Planets
type Planet string

// Age : Calculates age on given planet
func Age(s float64, p Planet) float64 {
	var orbitalPeriod float64
	switch p {
	case "Mercury":
		orbitalPeriod = 7600543.81
	case "Venus":
		orbitalPeriod = 19414149.05
	case "Earth":
		orbitalPeriod = 31557600
	case "Mars":
		orbitalPeriod = 59354032.69
	case "Jupiter":
		orbitalPeriod = 374355659.12
	case "Saturn":
		orbitalPeriod = 929292362.88
	case "Uranus":
		orbitalPeriod = 2651370019.32
	case "Neptune":
		orbitalPeriod = 5200418560.03
	}

	return s / orbitalPeriod
}
