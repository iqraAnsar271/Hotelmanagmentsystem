#pragma once
#include <string>

// Guest class stores user/guest information
class Guest {
private:
    std::string name;
    std::string contact;
    std::string email;
    int roomNumber;

public:
    Guest();
    Guest(std::string n, std::string c, std::string e, int room);

    std::string getName() const;
    std::string getContact() const;
    std::string getEmail() const;
    int getRoomNumber() const;
};
