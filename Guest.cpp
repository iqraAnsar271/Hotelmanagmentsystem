#include "Guest.h"

// Default constructor
Guest::Guest() {
    name = "";
    contact = "";
    email = "";
    roomNumber = -1;
}

// Parameterized constructor
Guest::Guest(std::string n, std::string c, std::string e, int room) {
    name = n;
    contact = c;
    email = e;
    roomNumber = room;
}

std::string Guest::getName() const {
    return name;
}

std::string Guest::getContact() const {
    return contact;
}

std::string Guest::getEmail() const {
    return email;
}

int Guest::getRoomNumber() const {
    return roomNumber;
}
