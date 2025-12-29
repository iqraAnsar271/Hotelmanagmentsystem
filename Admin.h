#pragma once
#include "Hotel.h"

// Admin class controls hotel management
class Admin {
private:
    Hotel* hotel;

public:
    Admin(Hotel* h);

    void addRoom();
    void addStaff();
    void viewAllData();
};

