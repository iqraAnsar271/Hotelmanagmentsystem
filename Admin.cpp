#include "Admin.h"
#include <iostream>

Admin::Admin(Hotel* h) {
    hotel = h;
}

// Admin adds a new room
void Admin::addRoom() {
    int number;
    std::string type;
    double price;

    std::cout << "\nEnter Room Number: ";
    std::cin >> number;

    std::cout << "Enter Room Type: ";
    std::cin >> type;

    std::cout << "Enter Price per Night: ";
    std::cin >> price;

    Room newRoom(number, type, price, "Available");

    hotel->addRoom(newRoom);

    std::cout << "Room added successfully!\n";
}

// Admin adds staff member
void Admin::addStaff() {
    std::string name, cnic, contact, position;
    int age;
    double salary;

    std::cout << "\nEnter Staff Name: ";
    std::cin >> name;

    std::cout << "Enter Age: ";
    std::cin >> age;

    std::cout << "Enter CNIC: ";
    std::cin >> cnic;

    std::cout << "Enter Contact: ";
    std::cin >> contact;

    std::cout << "Enter Salary: ";
    std::cin >> salary;

    std::cout << "Enter Position: ";
    std::cin >> position;

    Staff s(name, age, cnic, contact, salary, position);
    hotel->addStaff(s);

    std::cout << "Staff added successfully!\n";
}

// View basic data
void Admin::viewAllData() {
    std::cout << "\nAdmin view loaded (details can be expanded later).\n";
}
