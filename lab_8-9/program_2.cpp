#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int d, sum = 0, product = 1, min, max;
	cout << "Enter limits of range (min, max): " << endl;
	cin >> min;
	cin >> max;
	cout << "Range: (" << min << ", " << max << ")" <<endl;
	for (int i=min; i<=max; i++)
	{
		sum = sum + i;
		product *= i;
	}
	cout << "Sum of the range: " << sum << endl;
	cout << "Product of the range: " << product << endl;
	return 0;
}


