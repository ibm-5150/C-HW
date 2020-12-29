#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std;

int main (int argc, char** argv)
{	
	int n = 20;
	int random_integer;

	ofstream text_file;
	text_file.open("1.txt");
	
	for (int i=0; i<n; i++)
	{
		random_integer = (rand()%n)+1;
		cout << random_integer << endl;
		text_file << endl << random_integer;
	}

	text_file.close();
}


