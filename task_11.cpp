#include <iostream>
using namespace std;
int main()
{
	int num;
	int reverse = 0;
	cout<<"Input number: ";
	cin>>num;
	int number = num;
	while(num>0)
	{
		reverse = reverse*10+num%10;
		num = num/10;
	}
	cout<<"Reversed number from "<<number<<" is "<<reverse<<endl;
	return 0;
}
   

   
   
   
   
   
   
   
   

