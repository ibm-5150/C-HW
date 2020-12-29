#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main (int argc, char** argv)
{	
	ifstream text_file("1.txt"); 
	
	if(text_file.is_open())
	{
	
	    while(!text_file.eof())
		{
	        string number;
	        int num_data;
	        getline(text_file, number);               //reading numbers
	        num_data = atoi(number.c_str());          //converting strings to integers
	        if (num_data%2 == 0)
	        {	
	        	stringstream temp_data;
	        	temp_data << num_data;
	        	string text_data = temp_data.str();   //text_data = main string with data for 2.txt
	        	//cout << text_data;                  //even numbers are typed as one string without spaces
	        	const string a = text_data;
	        	cout << a;                            //????????????????????????????????????????????????????????
	        	
	        	ofstream text_file2;
	        	text_file2.open("2.txt");
	        	text_file2 << a;                      //???????????????????????????????????????????????????????????
	        	text_file2.close();
			}
	    }
    }
	return 0;
}

