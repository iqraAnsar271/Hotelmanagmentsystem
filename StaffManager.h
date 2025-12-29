#pragma once
#include <vector>
#include "Staff.h"

class StaffManager
{
public:
    static std::vector<Staff> staffList;

    static void addStaff(Staff s)
    {
        staffList.push_back(s);
    }

    static void deleteStaff(int index)
    {
        if (index >= 0 && index < staffList.size())
            staffList.erase(staffList.begin() + index);
    }
};

