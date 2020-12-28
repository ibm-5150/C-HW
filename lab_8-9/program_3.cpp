#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int min, max;
	cout << "Enter limits of range (min, max): " << endl;
	cin >> min;
	cin >> max;
	cout << "Range: (" << min << ", " << max << ")" <<endl;
	for (int i=min; i<=max; i++)
	{
		if (i%7==0 && i%11==0 && i>=100)            //  || i<=-100 ?
		{
			cout << "Three-digit multiples in range (" << min << ", " << max << "): " << i << endl;
		}
		/*
		else
		{
			cout << "Numbers don't meet the condition (3 digits, mutliple to 7 and 11)";            ?
			break;
		}
		*/
	}
	return 0;
}



