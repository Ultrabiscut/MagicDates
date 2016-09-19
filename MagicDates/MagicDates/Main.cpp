#include <iostream>
using namespace std;

//Program: MagicDates
//Author: Tyler Timmins
//Class: ITSE 1307 2002
//Description: Asks the user to enter a month, day, and
// two digit year and tells whether its a magic day or not.

int main()
{
	//declare variables
	int iDay;
	int iMonth;
	int iYear;

	//get input
	cout << "Enter Month: ";
	cin >> iMonth;
	cout << "Enter Day: ";
	cin >> iDay;
	cout << "Enter Two-Digit Year: ";
	cin >> iYear;

	//if...else statement
	if (iYear == iDay * iMonth)
		cout << "The day is magic!" << endl;
	else if (iYear != iDay * iMonth)
		cout << "The day is not magic." << endl;

	return 0;
}