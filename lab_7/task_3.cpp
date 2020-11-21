#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n;
	bool weekend;
	cout<<"Insert n: ";
	cin>>n;
	if ((n>=1) && (n<=5))
	weekend = false;
	else if ((n>=6) && (n<=7))
	weekend = true;
	//second statement
	if (weekend == true)
	cout<<"Weekend";
	else if (weekend == false)
	cout<<"Working day";
	return 0;
}
