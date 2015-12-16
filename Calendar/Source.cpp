//Jay Rosen
//This program determines the previous, current, and next month of a user input integer or string

#include<iostream>
#include<string>
using namespace std;

// Month class declaration
class Month
{
private:
	int month;
	static const int SIZE = 12;
	string months[SIZE];

public:
	Month();
	void setMonth(int);
	void getMonth();
	void operator++(int);
	void operator--(int);
};

// Program that uses Month class

/**************************************************************
*						Month::Month                          *
* Default Constructor for Month class that populates an array *
* of 12 strings to hold the months of the calender year		  *
**************************************************************/
Month::Month()
{
	months[0] = "January";
	months[1] = "February";
	months[2] = "March";
	months[3] = "April";
	months[4] = "May";
	months[5] = "June";
	months[6] = "July";
	months[7] = "August";
	months[8] = "September";
	months[9] = "October";
	months[10] = "November";
	months[11] = "December";
}


/**************************************************************
*						Month::setMonth                       *
* Sets integer input from validate() as the month for this	  *
* class mm													  *
**************************************************************/
void Month::setMonth(int mm)
{
	month = mm;
}

/**************************************************************
*						Month::getMonth                       *
* Display both the name and the number for the month     	  *
**************************************************************/
void Month::getMonth()
{
	cout << "\tnumber: " << month << "\tname: " << months[month - 1] << endl;
}


/*******************************************************************
*						Month::operator++                          *
* Determine if month is December (12), and if it is, set next month*
* to January (1). If not, increment month by 1.                    *
********************************************************************/
void Month::operator++(int)
{
	if (month == 12)
	{
		month = 1;
	}
	else
		month++;
}

/**********************************************************************
*						Month::operator--                             *
* Determine if month is January (1), and if it is, set previous month *
* to December (11). If not, decrement month by 1.                     *
***********************************************************************/
void Month::operator--(int)
{
	if (month == 1)
	{
		month = 12;
	}
	else
		month--;
}

//Prototype function
int valiMonth();

//Driver program
int main()
{
	Month calender;	// calender object of class Month

					//Prompt user and valiMonth input
	cout << "\n\n\t\t Enter the name or number of a month \n\t\t in a calender year (example: January or 1): ";
	int month = valiMonth();

	//set the month in the class
	calender.setMonth(month);

	//display the current month
	cout << endl << "\n\t\t Current month:\t";
	calender.getMonth();

	//decrement to the previous month
	calender--;

	//display the preious Month
	cout << endl << "\n\t\t Previous month:";
	calender.getMonth();

	//increment to the next month
	calender++; calender++;

	//display the new Month
	cout << endl << "\n\t\t Next month:\t";
	calender.getMonth();


	cout << "\n\n\t\t ";
	system("pause");

	return 0;
}

int valiMonth()
{
	string d = "";		//input month
	int month = -1;		//initial value for month until determined

	cin >> d;			//input string

	while (month == -1)	//Loop until month is valid number between 1 - 12
	{
		if (d == "January" || d == "january" || d == "1")
			month = 1;
		else if (d == "February" || d == "february" || d == "2")
			month = 2;
		else if (d == "March" || d == "march" || d == "3")
			month = 3;
		else if (d == "April" || d == "april" || d == "4")
			month = 4;
		else if (d == "May" || d == "may" || d == "5")
			month = 5;
		else if (d == "June" || d == "june" || d == "6")
			month = 6;
		else if (d == "July" || d == "july" || d == "7")
			month = 7;
		else if (d == "August" || d == "august" || d == "8")
			month = 8;
		else if (d == "September" || d == "september" || d == "9")
			month = 9;
		else if (d == "October" || d == "october" || d == "10")
			month = 10;
		else if (d == "November" || d == "november" || d == "11")
			month = 11;
		else if (d == "December" || d == "december" || d == "12")
			month = 12;
		else
		{
			cout << "\n\n\t\t ERROR: Invalid Input! \n\t\t Enter the name or number of a month \n\t\t in a calender year (example: January or 1): ";
			cin >> d;
		}
	}

	return month;

}


