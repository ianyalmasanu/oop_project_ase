#include <iostream>
#include <string.h>
#include "MovieTeather.h"

using namespace std;

	void MovieTeather::ListMoviesAvailable() {
		cout << "Select movie number from pool:\n";
		for (int i=0; i<noMovies; i++){
			cout << i + 1 << ". " << movieTitles[i] << std::endl;
		};
	}

	int MovieTeather::SelectMovie() {
		double inputMovNo;
		cin >> inputMovNo;
	//	if (inputMovNo >= 1 && inputMovNo <=10 && (inputMovNo-(int)inputMovNo) > 0) {
	//		cout << "Selected movie: " << movieTitles[inputMovNo-1];
	//	}
	//	else {
	//		cout << "Please enter a valid movie number:\n";
	//		MovieTeather::SelectMovie();
	//	}
		if (cin.good() && inputMovNo >= 1 && inputMovNo <= 10 && inputMovNo == static_cast<int>(inputMovNo)) {
			cout << "Selected movie: " << movieTitles[static_cast<int>(inputMovNo) - 1] << std::endl;
			return inputMovNo;
		}
		else {
			cin.clear();  // Clear the error flag
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
			cout << "Please enter a valid movie number:\n";
			MovieTeather::SelectMovie();
		}
	}




	void MovieTeather::GenerateSeatNo() {

		for (int row = 1; row <= nRows; row++) {
			for (int seat = 1; seat <= seatsPerRow; seat++) {
				int seatNumber = (row - 1) * seatsPerRow + seat; //e.g. max seat number is 200 and max row is 10
			}
		}
	}

	



