#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
#include"StaffMember.h"

using namespace std;

//inherit from StaffMember class
class Employee: public StaffMember
{
protected:
    //stores social security number
    string social;
    //stores amount of pay
    double payRate;

public:
    //constructors; one empty, and one with parameters
    Employee();
    Employee(string n, string a, string p, string s, double pr);

    //prints info about this staff member
    string printStaff();
    //prints total pay amount
    double pay();

};

#endif