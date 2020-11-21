#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	int a = 1; int b = 2; int c = 3; int med;
	med = (a>b) ? (a>c) ? (c>b) ? c:b:a: (b>c) ? (c>a) ? c:a:b;
	cout<<med;
	return 0;
}
