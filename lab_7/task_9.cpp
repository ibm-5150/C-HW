//(d+[(13*m-1)/5]+Y+[Y/4]+[c/4]-2*c+777) % 7;  m - month no.; d - day in month; Y - number of the year in cent.; c = amount of cent.;
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	int d, m, Y, c;
	int week_day;
	cout<<"Insert day: ";
	cin>>d;
	cout<<"Insert month: ";    //march = 1; february = 12;
	cin>>m;
	cout<<"Insert year: ";
	cin>>Y;
	cout<<"Insert century: ";
	cin>>c;
	week_day = (d+(13*m-1)/5+Y+Y/4+c/4-2*c+777) % 7;
	switch (week_day)
	{
		case 0: cout<<"Sunday"<<endl;break;
		case 1: cout<<"Monday"<<endl;break;
		case 2: cout<<"Tuesday"<<endl;break;
		case 3: cout<<"Wednesday"<<endl;break;
		case 4: cout<<"Thursday"<<endl;break;
		case 5: cout<<"Friday"<<endl;break;
		case 6: cout<<"Saturday"<<endl;break;
	}
	return 0;	
}

