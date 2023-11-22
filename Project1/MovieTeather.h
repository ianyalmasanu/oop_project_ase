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
	char location;
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

	void ListMoviesAvailable();
	void GenerateSeatNo();


public: 

	MovieTeather() {

	}


};

#endif


