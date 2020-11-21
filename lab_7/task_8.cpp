//program for calculation of date of the next date that ignores any years and other factors;
//every month has 31 days here and it works only depending on 1-31 dates;
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	int date; int new_month = 1;
	cout<<"Insert date: ";
	cin>>date;
	if (date >= 1 && date < 31)
	cout<<"Tomorrow date: "<<date+1;
	else if (date == 31)
	cout<<"Tomorrow date: "<<new_month;
	else if (date > 31)
	cout<<"Invalid date";
	return 0;
}
