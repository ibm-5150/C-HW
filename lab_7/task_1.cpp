#include <iostream>

using namespace std;
 
int main(int argc, char** argv)
{
	int a,b,max;
	cout<<"Input a,b: ";
	cin>>a>>b;
	max = a;
	if (b>max) max = b;
	cout<<"max = "<<max<<endl;
	return 0;
}

