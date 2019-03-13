#include <iomanip>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std; 

int main()
{ 	
	
	double hoursspent;
	cout << "Working hours a day?  " << cin >> hoursspent;
	cout << "Income without tax:" << " $ " <<  hoursspent * 15.50 <<endl;

	double daysspent;
	cout << "How many days do you work a week?  ";
	cin >> daysspent;	
	cout << "Weekly Income without tax:" << " $ " <<  daysspent * hoursspent * 15.50 <<endl; 	
	cout << "Income without Tax: " << " $ " <<  daysspent * hoursspent * 15.50 * 5 <<endl;
	cout << "Income with 14% Tax: "<< " $ "  <<  (daysspent * hoursspent * 15.50 * 5) - ((daysspent * hoursspent * 15.50 * 5) * .14)<<endl;
	cout << "Clothes & Accessories : "<< " $ " <<  ((daysspent * hoursspent * 15.50 * 5) - ((daysspent * hoursspent * 15.50 * 5) * .14)) * .10 <<endl;
	cout << "School Supplies: " << " $ " <<  ((daysspent * hoursspent * 15.50 * 5) - ((daysspent * hoursspent * 15.50 * 5) * .14)) * .01 <<endl;
	cout << "Saving Bonds: "<< " $ "  <<  ((daysspent * hoursspent * 15.50 * 5) - ((daysspent * hoursspent * 15.50 * 5) * .14)) - ((((daysspent * hoursspent * 15.50 * 5) - ((daysspent  * hoursspent  * 15.50 * 5) * .14)) * .01) + (((daysspent  * hoursspent  * 15.50 * 5) - ((daysspent  * hoursspent  * 15.50 * 5) * .14)) * .10)) <<endl;
	cout << "Saving Bonds from Parents: " << " $ " << (((daysspent  * hoursspent  * 15.50 * 5) - ((daysspent  * hoursspent  * 15.50 * 5) * .14)) - ((((daysspent  * hoursspent  * 15.50 * 5) - ((daysspent  * hoursspent  * 15.50 * 5) * .14)) * .01) + (((daysspent  * hoursspent  * 15.50 * 5) - ((daysspent  * hoursspent  * 15.50 * 5) * .14)) * .10))) / 2 <<endl;
	

	_getch();
	return 0;
}