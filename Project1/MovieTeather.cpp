#include "MovieTeather.h"
#include <iostream>
#include <string.h>


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


	void GenerateSeatNo() {

		for (int row = 1; row <= nRows; row++) {
			for (int seat = 1; seat <= seatsPerRow; seat++) {
				int seatNumber = (row - 1) * seatsPerRow + seat; //e.g. max seat number is 200 and max row is 10
			}
		}
	}

public:
	//setters
	void setLocation(char newLocation) {
		this->location = newLocation;
	}
	void setMovie(int index, const char* newMovie) {
		if (index >= 0 && index < 10) {
			strncpy(currentMovies[index], newMovie, sizeof(currentMovies[index]) - 1);
		}
	}

};


