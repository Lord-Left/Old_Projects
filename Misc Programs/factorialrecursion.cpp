#include <iostream>
using namespace std;

double fact(double m);

	int main()
	{
		double num;
		cout << "This program calculates factorials. Please input the double integer you would like to factorialize: " << endl; 
		cin >> num;

		cout << fact(num) << endl; 
	}

double fact(double m)
	{
	if (m == 1)
		{
			return 1; //the base case, we use this for f(1). 
		}
	else 
		{
			return m*fact(m-1); // basically, we are running the function in itself, cycling down and calculating from the base case up. 
		}
}