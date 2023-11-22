#include <iostream>
#include <string.h>
#include "MovieTeather.h"

using namespace std;

	void MovieTeather::ListMoviesAvailable() {
	//	for (int i = 0; i <10; i++) {
	//		cout << this->currentMovies[i][30] << "\n";
		for (int i=0; i<noMovies; i++){
			cout << i + 1 << ". " << movieTitles[i] << std::endl;
		};
	}

	void MovieTeather::SelectMovie() {

	}


	void MovieTeather::GenerateSeatNo() {

		for (int row = 1; row <= nRows; row++) {
			for (int seat = 1; seat <= seatsPerRow; seat++) {
				int seatNumber = (row - 1) * seatsPerRow + seat; //e.g. max seat number is 200 and max row is 10
			}
		}
	}

	



