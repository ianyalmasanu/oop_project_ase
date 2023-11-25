#pragma once
#ifndef EVENTS_H
#define EVENTS_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Events {

	struct EventRow {

		string movieTitleL;
		string movieHourL;
		string movieHallL;


		EventRow(const string& column1, const string& column2, const string& column3);
	};

	vector<EventRow> rows;
	
public:
	void addRow(const string& column1, const string& column2, const string& column3) {
		rows.emplace_back(column1, column2);
	}

	void displayTable() const {
		for (const auto& row : rows) {
			cout << "Movie Title: " << row.movieTitleL << ", Movie Hour: " << row.movieHourL << ", Movie Hall: " << row.movieHallL;
		}
	}


};







#endif