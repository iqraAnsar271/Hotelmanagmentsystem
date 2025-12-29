#pragma once
#include <vector>
#include "Room.h"

class RoomManager
{
private:
    std::vector<Room> rooms;

public:
    void addRoom(const Room& room);
    const std::vector<Room>& getRooms() const;
    bool deleteRoom(int roomNo);

};


