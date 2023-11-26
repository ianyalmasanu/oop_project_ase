#include <iostream>
#include <string>
#include <vector>
#include "Events.h"

Events::EventRow::EventRow(const string& column1, const string& column2) :
	eventTitle(column1), eventHour(column2) {

}


Events::EventRow::EventRow(const string& column1, const string& column2, const string& column3) :
	eventTitle(column1), eventHour(column2), eventLocation(column3) {

}

Events::EventRow::EventRow(const string& column1, const string& column2, const string& column3, const string& column4) :
	eventTitle(column1), eventHour(column2), eventLocation(column3), eventSubLocation(column4) {
}

void Events::addRow(const string& column1, const string& column2) {
	rows.emplace_back(column1, column2);
}

void Events::addRow(const string& column1, const string& column2, const string& column3) {
	rows.emplace_back(column1, column2, column3);
}
void Events::addRow(const string& column1, const string& column2, const string& column3, const string& column4) {
	rows.emplace_back(column1, column2, column3, column4);
}


void Events::displayTable(int selectedEventType) const {
	for (const auto& row : rows) {
		switch (selectedEventType) {
		case 1: cout << "Movie Title: " << row.eventTitle << ", hour: " << row.eventHour << ", HALL: " << row.eventLocation << endl;
			break;
		case 2: cout << "Play Title: " << row.eventTitle << ", hour: " << row.eventHour << endl;
			break;
		case 3: cout << "Football Match: " << row.eventTitle << ", hour: " << row.eventHour << ", Stand: " << row.eventLocation << ", Access: " << row.eventSubLocation << endl;
		}
	}

}

