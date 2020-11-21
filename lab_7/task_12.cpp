#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	float payment = 1000;
	int working_exp;
	cout<<"Insert worker's experience time in years: ";
	cin>>working_exp;
	
	if (working_exp<5)
	payment = payment;
	
	else if ((working_exp>=5) && (working_exp<=10))
	payment = payment*1.05; //5% raise
	
	else if (working_exp>10)
	payment = payment*1.1;  //10% raise
	
	cout<<"Worker's payment: "<<payment<<"$";
}

