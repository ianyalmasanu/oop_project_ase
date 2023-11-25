#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include "MovieTheater.h"
#include "Ticket.h"
#include "AvenueSelect.h"

using namespace std;

int main() {
	AvenueSelect myAvenue;
	MovieTheater myMovie;
	myAvenue.ListAvenues();
	int selectedAvenue = myAvenue.SelectAvenue();
	if (selectedAvenue == 1) {
		myMovie.ListMoviesAvailable();
		myMovie.SelectMovie();
	}
}