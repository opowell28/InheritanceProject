#include"Volunteer.h"
#include<string>

using namespace std;


Volunteer::Volunteer(string n, string a, string p) 
    : StaffMember(n, a, p)
{
                             
}

double Volunteer::pay()
{
    return 0;          
}
