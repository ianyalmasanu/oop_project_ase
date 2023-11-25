#pragma once
#ifndef AVENUESELECT_H
#define AVENUESELECT_H
class AvenueSelect
{
private:

	enum { eTypeNo = 3 };
	const char* eventsTypes[eTypeNo] = {
		"Cinema",
		"Football Match",
		"Theater Play"
	};


public:
	AvenueSelect() {

	};
	void ListAvenues();
	int SelectAvenue();

	
};

#endif