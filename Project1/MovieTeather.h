#pragma once

class MovieTeather
{
	char location;
	const int max_seats = 200;
	const int nRows = 20;
	const int seatsPerRow = 10;
	int generated = 0;
	int available_seats = max_seats - generated;
	char currentMovies[10][30] = {
		"Abracadabra",
		"Plan B",
		"Baltimore Dawn",
		"Markus Zein",
		"The Last Book",
		"You were not here",
		"Cars in space 4",
		"The Message",
		"1 Week",
		"The Jam"
	};

};

