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
	void addRow(const string& column1, const string& column2, const string& column3);
	void displayTable() const;

};
#endif