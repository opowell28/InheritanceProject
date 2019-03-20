#ifndef VOLUNTEER_H
#define VOLUNTEER_H

#include<string>
#include"StaffMember.h"

using namespace std;

class Volunteer: public StaffMember
{
public:
	Volunteer(string n, string a, string p);
	double pay();

};

#endif