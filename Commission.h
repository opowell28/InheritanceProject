//
// Created by Owen Powell on 2019-03-18.
//

#ifndef INC_6_INHERITANCE_COMMISSION_H
#define INC_6_INHERITANCE_COMMISSION_H

#include "Hourly.h"
#include "StaffMember.h"

class Commission: public Hourly {
private:
    //total sales made
    double madeSales;
    //commission rate for a sale
    double commRate;
public:
    //default and parameterized constructors
    Commission();
    Commission(string n, string a, string p, string s, double pr);
    //adds sales made to total sales
    void addSales(double totalSales);
    double pay();
    string printStaff(double &madeSales);

};


#endif //INC_6_INHERITANCE_COMMISSION_H