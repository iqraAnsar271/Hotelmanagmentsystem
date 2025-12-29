#pragma once
#include <string>

// ParkingSlot class handles vehicle parking
class ParkingSlot {
private:
    int slotNumber;
    bool occupied;
    std::string vehicleNumber;
    std::string guestName;

public:
    ParkingSlot();
    ParkingSlot(int slot);

    bool isOccupied() const;
    int getSlotNumber() const;

    void assignSlot(std::string vehicle, std::string guest);
    void freeSlot();
};

