#include "ParkingSlot.h"

// Default constructor
ParkingSlot::ParkingSlot() {
    slotNumber = 0;
    occupied = false;
    vehicleNumber = "";
    guestName = "";
}

// Parameterized constructor
ParkingSlot::ParkingSlot(int slot) {
    slotNumber = slot;
    occupied = false;
    vehicleNumber = "";
    guestName = "";
}

bool ParkingSlot::isOccupied() const {
    return occupied;
}

int ParkingSlot::getSlotNumber() const {
    return slotNumber;
}

void ParkingSlot::assignSlot(std::string vehicle, std::string guest) {
    occupied = true;
    vehicleNumber = vehicle;
    guestName = guest;
}

void ParkingSlot::freeSlot() {
    occupied = false;
    vehicleNumber = "";
    guestName = "";
}
