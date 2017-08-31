#include <iostream>
using namespace std; 

double interest(double bal, double rate, double period);

	int main()
	{
		double initBalance;
		cout << "Please input the initial balance you would like to calculate compound interest for: " << endl;
		cin >> initBalance;

		double intRate;
		cout << "Please input the interest rate: " << endl;
		cin >> intRate;

		double period;
		cout << "For how many periods are you calculating interest for? " << endl;
		cin >> period;

		cout << interest(initBalance, intRate, period) << endl; 
	}

double interest(double bal, double rate, double period)
	{
		if (period == 0) return bal; 
		else return interest(bal, rate, period-1) + (interest(bal, rate, period-1) * rate);
		/* What is being done here is that we are conceptualizing compound interest recursively.
		What is compound interest? Original balance + (original balance * interest rate). If we were dealing with
		5 periods, total would be equal to the computed CI of 4 periods plus that amount times interest.
		*/
	}
