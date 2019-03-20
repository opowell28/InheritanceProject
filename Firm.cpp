#include<iostream>
#include<string>
#include"StaffMember.h"
#include"Volunteer.h"
#include"Employee.h"
#include "Executive.h"
#include "Hourly.h"
#include "Commission.h"

template <class T> 
void payday(T & staff);

using namespace std;

int main()
{
	StaffMember staff0("Tom", "123 Computer Lane", "555-1234");
	Volunteer staff1("Bruce", "456 Off Street", "555-0101");
	Employee staff2("Dr. Kelso", "321 Duds St.", "555-0000",
		                   "010-20-3040", 1169.23);
	Executive staff3("Dave", "1215 River Street", "333-2323", "254-88-0921", 3000);
	Hourly staff4("Evan", "321 Forest Drive", "848-0013", "301-43-1135", 9.75);
	Commission staff5("Jason", "438 Branch Court", "409-2319", "439-11-1324", 6.25);


    staff0.printStaff();
	payday(staff0);
	payday(staff1);
	payday(staff2);
	
	//system("pause");
	return 0;
	
}

template <class T>
void payday(T & staff)
{
	double amount;

    staff.printStaff();

    //amount = staff.pay();

	if(amount == 0)
		cout << "Thanks!"<<endl;
	else
	    cout << "Paid: "<<amount<<endl;

	cout<<"\n---------------------------\n"<<endl;
}