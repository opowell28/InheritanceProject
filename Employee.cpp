#include <string>
#include <iostream>
#include "Employee.h"
#include "Executive.h"
#include "Hourly.h"
#include "Commission.h"

using namespace std;

Employee::Employee()
   :StaffMember()
{
     social = "social";
     payRate = 0;            
}

Employee::Employee(string n, string a, string p, string s, double pr)
    :StaffMember(n, a, p)
{
    social = s;
    payRate = pr;   
}

// function overriding
string Employee::printStaff()
{
    StaffMember::printStaff();
    cout<<"Social Security Number: "<<social<<endl;     
}

double Employee::pay()
{
    return payRate;
}