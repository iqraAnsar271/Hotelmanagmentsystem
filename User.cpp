#include "User.h"
#include <iostream>

User::User(std::string n, std::string c, std::string e) {
    name = n;
    contact = c;
    email = e;
}

// User searches available rooms
void User::searchRooms(Hotel& hotel) {
    std::cout << "\nRoom search feature will be implemented later.\n";
}
