#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	//----------------------------------
	/*string english = "Hello, World!";
	string spanish = "Hola Mundo!";
	int len_1 = english.length();
	int len_2 = spanish.length();
	if (len_1 > len_2)
	cout<<"Longer string is: "<<english;
	else if (len_2 > len_1)
	cout<<"Longer string is: "<<spanish;
	*/
	//----------------------------------
	string str_1, str_2;
	cout<<"Insert string 1: ";
	cin>>str_1;
	cout<<"Insert string 2: ";
	cin>>str_2;
	int len_1 = str_1.length();
	int len_2 = str_2.length();
	if (len_1 > len_2)
	cout<<"Longer string is: "<<str_1;
	else if (len_2 > len_1)
	cout<<"Longer string is: "<<str_2;
	else if (len_1 == len_2)
	cout<<"Strings are equal";
}

