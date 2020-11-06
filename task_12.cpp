//formula to calculate monthly income P*(5/100)/365*31; 365 = days in the year; 31 = days in the month;
//presumably, there's 30.5 days in average month => 31 days in this formula;

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float P,months;
	float r = 5; //5%/year;
	float total_percentage = 100;
	cout<<"Insert initial principal balance: ";
	cin>>P;
	cout<<"Insert amount of months for deposit: ";
	cin>>months;
	float t = months;
	float monthly_income = P*(r/total_percentage)/365*31; 
	cout<<"Monthly income is: "<<monthly_income<<" usd"<<endl;
	float total_income = monthly_income * months;
	cout<<"Total income is: "<<total_income<<" usd"<<endl;
	float sum = total_income+P;
	cout<<"Total amount payable: "<<sum<<" usd"<<endl;
}
