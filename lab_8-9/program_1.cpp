#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int sum = 0, count = 0, n, avg;
	cout << "Insert value of n (n = 100) : " << endl;
	cin >> n;
	if (n == 100)
	{
		for (int i=1; i<=n; i++)
		{
			sum = sum+i;
			count++;
		}
	cout << "Sum of odd values: " << sum << endl;
	avg = sum/count;
	cout << "Average of odd values: " << avg << endl;	
	}
	else
	{
		cout << "Value of n can't be any different than 100";
	}
	return 0;
}


