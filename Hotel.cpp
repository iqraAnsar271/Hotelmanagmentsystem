#include "Hotel.h"
#include <iostream>

// Constructor
Hotel::Hotel() {
    // Initially empty hotel
}

// ---------------- ROOM MANAGEMENT ----------------

void Hotel::addRoom(const Room& room) {
    rooms.push_back(room);
}

void Hotel::addGuest(const Guest& guest) {
    guests.push_back(guest);
}

void Hotel::addStaff(const Staff& staffMember) {
    staff.push_back(staffMember);
}
