#include <iostream>
#include <string.h>
#include "MovieTeather.h"

using namespace std;

	void MovieTeather::ListMoviesAvailable() {
		for (int i = 1; i <= 10; i++) {
			cout << currentMovies[i][30] << "\n";
		};
	}


	void MovieTeather::GenerateSeatNo() {

		for (int row = 1; row <= nRows; row++) {
			for (int seat = 1; seat <= seatsPerRow; seat++) {
				int seatNumber = (row - 1) * seatsPerRow + seat; //e.g. max seat number is 200 and max row is 10
			}
		}
	}

	MovieTeather::MovieTeather() {

}



