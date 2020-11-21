#include <iostream>

using namespace std;

int main (int argc, char** argv) //dev-c++ doesn't support int void ()
{
	int a,b,c;
	cin>>a>>b;
	c = (a>b) ? b:a;             //if a>b => c = b; else c = a;
	cout<<c;
	return 0; 
}
