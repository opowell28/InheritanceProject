//
// Created by Owen Powell on 2019-03-17.
//

#ifndef INC_6_INHERITANCE_HOURLY_H
#define INC_6_INHERITANCE_HOURLY_H

#include <string>
#include "Employee.h"

using namespace std;

class Hourly: public Employee {
protected:
    //stores number of hours worked
    int hoursWorked;
public:
    //constructors with and without parameters
    Hourly();
    Hourly(string n, string a, string p, string s, double pr);
    //specifies how many hours have been worked
    void addHours(int moreHours);
    double pay();
    string printStaff();
};


#endif //INC_6_INHERITANCE_HOURLY_H