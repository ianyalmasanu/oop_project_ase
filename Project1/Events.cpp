#include <iostream>
#include <string>
#include <vector>
#include "Events.h"

Events::EventRow::EventRow(const string& column1, const string& column2, const string& column3) :
	eventTitle(column1), eventHour(column2), eventLocation(column3) {

}

Events::EventRow::EventRow(const string& column1, const string& column2, const string& column3, const string& column4) :
	eventTitle(column1), eventHour(column2), eventLocation(column3), eventSubLocation(column4) {
}

void Events::addRow(const string& column1, const string& column2, const string& column3) {
	rows.emplace_back(column1, column2, column3);
}
void Events::addRow(const string& column1, const string& column2, const string& column3, const string& column4) {
	rows.emplace_back(column1, column2, column3, column4);
}


void Events::displayTable() const { //movie scheduler
	for (const auto& row : rows) {
		cout << "Movie Title: " << row.eventTitle << ", hour: " << row.eventHour << ", HALL: " << row.eventLocation << endl;
	}
}

void Events::displayTable() const { //play scheduler -- will not work with same attributes
	for (const auto& row : rows) {
		cout << "Play Title: " << row.eventTitle << ", hour: " << row.eventHour << ", Hall Orientation: " << row.eventLocation << endl;
	}
}



void Events::displayTable() const { //football match scheduler
	for (const auto& row : rows) {
		cout << "Football Match: " << row.eventTitle << ", hour: " << row.eventHour << ", Stand: " << row.eventLocation << ", PLACEHOLDER:" << row.eventSubLocation << endl;
	}
}