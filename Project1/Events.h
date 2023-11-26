#pragma once
#ifndef EVENTS_H
#define EVENTS_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Events {

	struct EventRow {

		string eventTitle;
		string eventHour;
		string eventLocation;
		string eventSubLocation;


		EventRow(const string& column1, const string& column2, const string& column3);
		EventRow(const string& column1, const string& column2, const string& column3, const string& column4);
	};

	vector<EventRow> rows;
	
public:
	void addRow(const string& column1, const string& column2, const string& column3);
	void addRow(const string& column1, const string& column2, const string& column3, const string& column4);
	void displayTable() const;

};
#endif