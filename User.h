#pragma once
#include <string>
#include "Hotel.h"

// User class handles user interactions
class User {
private:
    std::string name;
    std::string contact;
    std::string email;

public:
    User(std::string n, std::string c, std::string e);

    void searchRooms(Hotel& hotel);
};

