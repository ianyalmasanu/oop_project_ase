#pragma once
#ifndef TICKET_H
#define TICKET_H
class Ticket
{
private:
	int tID;
	char tMovie;
	int tSeat;
	int tRow;
	char tLocation[10][20];

public:

	int generated();

	Ticket();

};

#endif
