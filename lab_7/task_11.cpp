#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	float a,b,c;
	cout<<"Insert A: ";
	cin>>a;
	cout<<"Insert B: ";
	cin>>b;
	cout<<"Insert C: ";
	cin>>c;
	
	if ((a==b) && (a==c) && (b==c))
	cout<<"Equilateral triangle";
	
	else if ((a==b) || (a==c) || (b==c))
	cout<<"Isosceles triangle";
	
	else if ((a!=b!=c) && (a<b+c) && (b<a+c) && (c<a+b))
	cout<<"Scalene triangle";
	
	//optional
	else if ((a<=0) || (b<=0) || (c<=0))
	cout<<"Sides can't be negative or zero";
	
	else
	cout<<"Not a triangle";
	return 0;
}

