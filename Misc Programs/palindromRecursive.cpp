#include <iostream>
#include <string>
using namespace std;

void palindrome(string input);

	int main()
	{
		string input;

		cout << "Please input an even length word longer than 3 letters and I'll tell you if its a palindrome: " << endl;
		cin >> input;		

		palindrome(input);
	}

void palindrome(string input)
{
	bool pd = false;
	if (input[0] == input[input.length()-1])
	{
		input = substr(1, input.length()-2);
		pd = true;
		palindrome(input);
	}
	else
	{
		pd = false;
	}

	if (pd == false)
	{
		cout << "This is a palindrome!" << endl;
	}
}

