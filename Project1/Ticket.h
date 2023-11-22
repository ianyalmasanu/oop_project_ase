#pragma once
#ifndef TICKET_H
#define TICKET_H
class Ticket
{
private:
	int tID = 0;
	char tMovie[30] = {"N/A"};
	int tSeat = 0;
	int tRow = 0;
	char tLocation[10][20] = { "N/A" };

public:

	int generated();

	Ticket();

};

#endif
