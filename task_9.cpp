//program for calculation volume of right circular cone V = pi* r_square * (h/3)

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float r,h,V;
	const float pi = 3.14159;
	cout<<"Input cone radius: ";
	cin>>r;
	float r_squared = pow(r, 2);
	//cout<<r_squared<<endl;
	cout<<"Input cone height: ";
	cin>>h;
	V = pi*r_squared*(h/3);
	cout<<"Cone volume: "<<V<<endl;
	return 0;
}
