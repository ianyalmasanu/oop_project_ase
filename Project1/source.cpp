#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include "MovieTheater.h"
#include "Ticket.h"
#include "AvenueSelect.h"
#include "Events.h"
#include "FillSchedules.h"

using namespace std;

int main() {
	/*Events myEvent;
	fillMoviesScheduler(myEvent);
	myEvent.displayTable();*/

	AvenueSelect myAvenue;
	MovieTheater myMovie;
	myAvenue.ListAvenues();
	int selectedAvenue = myAvenue.SelectAvenue();
	if (selectedAvenue == 1) {
		myMovie.ListMoviesAvailable();
		myMovie.SelectMovie();
	}
}