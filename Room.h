#pragma once
#include <string>

class Room {
private:
    int roomNo;
    std::string type;
    double price;
    std::string status;

public:
    // REQUIRED constructor (4 arguments)
    Room(int rNo, const std::string& rType, double rPrice, const std::string& rStatus);

    int getRoomNo() const;
    std::string getType() const;
    double getPrice() const;
    std::string getStatus() const;
};







