//
// Created by Owen Powell on 2019-03-17.
//

#ifndef INC_6_INHERITANCE_EXECUTIVE_H
#define INC_6_INHERITANCE_EXECUTIVE_H

#include "Employee.h"

//inherit from the Employee class
class Executive: public Employee {
protected:
    //stores the amount of the bonus
    double bonus;
    //stores pay amount
    double execPay;

public:
    //default and parameterized constructors
    Executive();
    Executive(string n, string a, string p, string s, double pr);
    //function that awards a bonus to the executive
    double awardBonus(double execBonus);
    //return executive pay value
    double pay();
};


#endif //INC_6_INHERITANCE_EXECUTIVE_H