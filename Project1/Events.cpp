#include <iostream>
#include <string>
#include <vector>
#include "Events.h"

Events::EventRow::EventRow(const string& column1, const string& column2, const string& column3) :
	movieTitleL(column1), movieHourL(column2), movieHallL(column3) {

}

void Events::addRow(const string& column1, const string& column2, const string& column3) {
	rows.emplace_back(column1, column2, column3);
}

void Events::displayTable() const {
	for (const auto& row : rows) {
		cout << "Movie Title: " << row.movieTitleL << ", hour: " << row.movieHourL << ", HALL " << row.movieHallL << endl;

	}
}