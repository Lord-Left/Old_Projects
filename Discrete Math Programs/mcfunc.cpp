// Implementation of McCarthy Function

#include <iostream>
#include <fstream>
using namespace std;

void mC (int &input);

	int main()
	{
		int n; // number user inputs
		cout << "This is an implementation of the McCarthy 91 function. Please input the number you would like to test: " << endl; 
		cin >> n; 
		int r = 91; // upper bound of McCarthy Function

		mC(n);
		cout << n << endl; 
		return 0;
	}

void mC (int &input)
	{
		if (input >= 101)
		{
			input = input - 10;
		}
		else
		{
			input = input + 11;
			mC(input);
			mC(input);
		}
	}
