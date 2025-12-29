#include "Room.h"

// Constructor implementation (MUST MATCH EXACTLY)
Room::Room(int rNo, const std::string& rType, double rPrice, const std::string& rStatus)
{
    roomNo = rNo;
    type = rType;
    price = rPrice;
    status = rStatus;
}

int Room::getRoomNo() const {
    return roomNo;
}

std::string Room::getType() const {
    return type;
}

double Room::getPrice() const {
    return price;
}

std::string Room::getStatus() const {
    return status;
}






