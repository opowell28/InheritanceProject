//
// Created by Owen Powell on 2019-03-19.
//

#include <iostream>
#include <string>
#include "Hourly.h"

using namespace std;

//use constructor to set hourlyPay equal to the pr parameter and set hoursWorked
Hourly::Hourly(string n, string a, string p, string s, double pr) {
    hoursWorked = 35;
}

//add the hours worked to the total
void Hourly::addHours(int moreHours) {
    hoursWorked += moreHours;
}

//call pay function and calculate the pay for an hourly employee
double Hourly::pay() {
    double payment = payRate * hoursWorked;
    //set number of hours back to 0 to prevent overlap
    hoursWorked = 0;
    return payment;
}

//call printStaff function from Employee class and add an hourly employee's hours worked
string Hourly::printStaff() {
    string result = Employee::printStaff() += to_string(hoursWorked);
    return result;
}