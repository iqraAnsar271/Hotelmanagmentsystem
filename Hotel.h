#pragma once
#include <vector>
#include "Room.h"
#include "Guest.h"
#include "Staff.h"
#include "ParkingSlot.h"

// Hotel class controls all system data
class Hotel {
private:
    std::vector<Room> rooms;
    std::vector<Guest> guests;
    std::vector<Staff> staff;
    std::vector<ParkingSlot> parkingSlots;

public:
    Hotel();

    void addRoom(const Room& room);
    void addGuest(const Guest& guest);
    void addStaff(const Staff& staff);
};


