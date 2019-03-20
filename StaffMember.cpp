#include"StaffMember.h"
#include<iostream>
#include<string>

using namespace std;

StaffMember::StaffMember()
{
	name="Name";
	address="Address";
	phone="Phone";
}

StaffMember::StaffMember(string n, string a, string p)
{
	name=n;
	address=a;
	phone=p;
}

void StaffMember::printStaff()
{
	cout<<"Name: "<<name<<endl
		<<"Address: "<<address<<endl
		<<"Phone Number: "<<phone<<endl;
}