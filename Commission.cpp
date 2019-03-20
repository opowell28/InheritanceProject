//
// Created by Owen Powell on 2019-03-19.
//

#include <iostream>
#include <string>
#include "Commission.h"

//call the constructor from Hourly and set commRate
Commission::Commission(string n, string a, string p, string s, double pr) {
    Hourly(n, a, p, s, pr);
    this->commRate = commRate;
    //set variable values
    commRate = 0.2;
    hoursWorked = 40;
    madeSales = 950;
}

//add the employee's sales made so far to the totals sales made
void Commission::addSales(double totalSales) {
    totalSales += madeSales;
}

//calculate commission employee's pay and print it
double Commission::pay() {
    double result =  Employee::pay() + (madeSales * commRate);
    //set sales back to 0 to prevent overlap
    madeSales = 0;
    return result;
}

//print staff info
string Commission::printStaff(double &madeSales) {
    string result = Hourly::printStaff() += madeSales;
    return result;
}