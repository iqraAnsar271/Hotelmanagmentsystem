#include "RoomManager.h"

void RoomManager::addRoom(const Room& room)
{
    rooms.push_back(room);
}

const std::vector<Room>& RoomManager::getRooms() const
{
    return rooms;
}

