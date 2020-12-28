#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
	int variant;
	cout << "Insert number for desired switch case:" <<endl;
	cout << "1 - Case 1 (for), 2 - Case 2 (while), 3 - Case 3 (do while)";
	cin >> variant;
	int x = -5;
	float Y;
	//case 1 (for)
	float a = 0.4, b = 0.6, z = exp(x);
	//case 2 (while)
	float a2 = 2.3, b2 = 2.8, z2 = exp(2*a);
	//case 3 (do while)
	float a3 = 4.2, b3 = 5.1, z3 = exp(3*b);
	
	switch (variant)
	{
		case 1:
			
			cout << "Case 1 (for): " << endl;
			for (x = -5; x <= 5; x += 1)
			{
				cout << "------------------" << endl;
				cout << "x = " << x << endl;
				if (x < 3.5*a) Y = a*b*x*(cos(z*x)*cos(z*x));
				else if (x >= 3.5*a && x <= b) Y = (a+b*x) - log10(z*x);
				else Y = sqrt(a+b*x-z*(x*x));
				cout << "Y = " << Y << endl;
				x += 1;
				if (x > 5) break;
			}
			break;
		
		case 2:
			
			cout << "Case 2 (while): " << endl;
			while (x <= 5)
			{
				cout << "------------------" << endl;
				cout << "x = " << x << endl;
				if (x < 3.5*a2) Y = a2*b2*x*(cos(z2*x)*cos(z2*x));
				else if (x >= 3.5*a2 && x <= b2) Y = (a2+b2*x) - log10(z2*x);
				else Y = sqrt(a2+b2*x-z2*(x*x));
				cout << "Y = " << Y << endl;
				x += 1;
				if (x > 5) break;
			}
			break;
			
		case 3: 
		
			cout << "Case 3 (do while): " << endl;
			do
			{
				cout << "------------------" << endl;
				cout << "x = " << x << endl;
				if (x < 3.5*a3) Y = a3*b3*x*(cos(z3*x)*cos(z3*x));
				else if (x >= 3.5*a3 && x <= b3) Y = (a3+b3*x) - log10(z3*x);
				else Y = sqrt(a3+b3*x-z3*(x*x));
				cout << "Y = " << Y << endl;
		
				x += 1;
			}
			
			while (x <= 5);
			break;		
	}
	return 0;	
}

	












