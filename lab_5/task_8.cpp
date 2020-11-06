//program for calculation area of triangle by height and basis

#include <iostream>

using namespace std;

int main()
{
	float a,h,S;
	cout<<"Input triangle basis: ";
	cin>>a;
	cout<<"Input triangle height: ";
	cin>>h;
	S = a*h/2;
	cout<<"Triangle area: "<<S<<endl;
	//getch();
	return 0 ;
}


