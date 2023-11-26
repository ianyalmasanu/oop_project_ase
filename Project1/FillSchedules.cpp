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
MovieSchedules.displayTable();
}