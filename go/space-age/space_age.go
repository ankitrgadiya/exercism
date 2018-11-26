package space

// Planet : A type to store Planets
type Planet string

// Age : Calculates age on given planet
func Age(s float64, p Planet) float64 {
	planets := map[Planet]float64{
		"Mercury": 0.2408467,
		"Venus":   0.61519726,
		"Earth":   1,
		"Mars":    1.8808158,
		"Jupiter": 11.862615,
		"Saturn":  29.447498,
		"Uranus":  84.016846,
		"Neptune": 164.79132,
	}
	orbitalPeriod := float64(31557600)

	return s / (orbitalPeriod * planets[p])
}
