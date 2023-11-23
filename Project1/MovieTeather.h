#pragma once
#ifndef MOVIETEATHER_H
#define MOVIETEATHER_H

class MovieTeather
{
private:
	const int max_seats = 200;
	const int nRows = 10;
	const int seatsPerRow = 20;
	int generated = 0;
	int available_seats = max_seats - generated;
	enum locations {
		HALL_A,
		HALL_B,
		HALL_C,
		HALL_D
	};
	enum {noMovies = 10};
	const char* movieTitles[noMovies] = {
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

public:
	void ListMoviesAvailable();
	void GenerateSeatNo();
	int SelectMovie();




	MovieTeather() {

	}


};

#endif


