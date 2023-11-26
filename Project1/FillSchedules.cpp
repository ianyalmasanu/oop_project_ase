#include <iostream>
#include <string>
#include <vector>
#include "FillSchedules.h"

void fillMoviesScheduler(Events& MovieSchedules) {
MovieSchedules.addRow("Abracadabra", "12:00", "A");
MovieSchedules.addRow("Plan B", "12:00", "B");
MovieSchedules.addRow("Baltimore Dawn", "12:00", "C");
MovieSchedules.addRow("Markus Zein", "12:00", "D");
MovieSchedules.addRow("The Last Book", "14:00", "A");
MovieSchedules.addRow("You Were Not Here", "14:00", "B");
MovieSchedules.addRow("Cars in Space 4", "14:00", "C");
MovieSchedules.addRow("The Message", "14:00", "D");
MovieSchedules.addRow("1 Week", "16:00", "A");
MovieSchedules.addRow("The Jam", "16:00", "B");
MovieSchedules.addRow("Abracadabra", "16:00", "C");
MovieSchedules.addRow("Plan B", "16:00", "D");
MovieSchedules.addRow("Baltimore Dawn", "18:00", "A");
MovieSchedules.addRow("Markus Zein", "18:00", "B");
MovieSchedules.addRow("The Last Book", "18:00", "C");
MovieSchedules.addRow("You Were Not Here", "18:00", "D");
MovieSchedules.addRow("Cars in Space 4", "20:00", "A");
MovieSchedules.addRow("The Message", "20:00", "B");
MovieSchedules.addRow("1 Week", "20:00", "C");
MovieSchedules.addRow("The Jam", "20:00", "D");
MovieSchedules.addRow("Abracadabra", "22:00", "A");
MovieSchedules.addRow("Plan B", "22:00", "B");
MovieSchedules.addRow("Baltimore Dawn", "22:00", "C");
MovieSchedules.addRow("Markus Zein", "22:00", "D");

}

void fillPlayScheduler(Events& PlaySchedules) {
	PlaySchedules.addRow("Symphony of Spring", "18:00");
	PlaySchedules.addRow("Symphony of Spring", "20:00");
	PlaySchedules.addRow("Night of Stars", "14:00");
	PlaySchedules.addRow("Night of Stars", "16:00");

}
void fillFootballScheduler(Events& FootballSchedules) {
	FootballSchedules.addRow("Ruby Hamsters VS Orange Moths", "20:00", "National Arena", "General Access");
	FootballSchedules.addRow("Slate Spiders VS The Wild Bakers", "20:00", "South Stadium", "General Access");
	FootballSchedules.addRow("The Sneaky Hatters VS Khaki Rangers", "20:00", "Sports Bay", "General Access");

}
