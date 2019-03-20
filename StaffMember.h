#ifndef STAFFMEMBER_H
#define STAFFMEMBER_H

#include<iostream>
#include<string>

using namespace std;

class StaffMember
{
private:
	string name;
	string address;
	string phone;

public:
	StaffMember();
	StaffMember(string n, string a, string p);
	void printStaff();
};

#endif