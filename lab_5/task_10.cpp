//porgram for converting time in minutes to hours and minutes

#include <iostream>

using namespace std;

int main()
{
	float minutes;
	cout<<"Enter minutes: ";
	cin>>minutes;
	int hours;
	hours = minutes/60;
	//cout<<hours<<endl;
	float remaining_minutes = minutes-(hours*60);
	//cout<<remaining_minutes<<endl;
	cout<<minutes<<" minutes is "<<hours<<"hrs "<<remaining_minutes<<"min"<<endl;
}


