def leap_year(year):
	return int(year) % 4 == 0 and (int(year) % 100 != 0 or int(year) % 400 == 0)
