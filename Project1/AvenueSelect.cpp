#include <iostream>
#include <string.h>
#include "AvenueSelect.h"

using namespace std;

void AvenueSelect::ListAvenues() {
		cout << "Select movie number from pool:\n";
		for (int i = 0; i < eTypeNo; i++) {
			cout << i + 1 << ". " << eventsTypes[i] << std::endl;
		};
}

int AvenueSelect::SelectAvenue(){
	double inputAvenue;
	cin >> inputAvenue;
	if (cin.good() && inputAvenue >= 1 && inputAvenue <= 3 && inputAvenue == static_cast<int>(inputAvenue)) {
		cout << "Selected Event: " << eventsTypes[static_cast<int>(inputAvenue) - 1] << std::endl;
		return inputAvenue;
		}
	else {
		cin.clear();  // Clear the error flag
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // ignore non full-integer characters
		cout << "Please enter a valid event number:\n";
		AvenueSelect::SelectAvenue();
		}
	}