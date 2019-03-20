//
// Created by Owen Powell on 2019-03-19.
//

#include <iostream>
#include <string>
#include "Executive.h"

using namespace std;


Executive::Executive(): Employee() {
    social = "social";
    bonus = 0.0;
}

//constructor sets execPay and execBonus variables
Executive::Executive(string n, string a, string p, string s, double pr)
: Employee(n, a, p, s, pr) {
    social = s;
    payRate = pr;
}

//set value of the bonus
double Executive::awardBonus(double execBonus) {
    bonus = execBonus;
}

//call pay function in employee and add the bonus for an executive
double Executive::pay() {
    double payment = Employee::pay();
    //set bonus back to 0 to prevent overlap
    bonus = 0;
    return payment;
}