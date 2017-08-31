#include <iostream>
using namespace std;

//PRECONDITION: A string like "best friends"
//POSTCONDITION: The above string mutated to an acronym, like "bf"
void acronym(string& words);

	int main()
	{
		string words;
		cout << "Please input a series of words - with no trailing or preceeding spaces - that you would like an acronym for: " ;

		getline(cin, words); // gets entire string - cin is otherwise whitespace delimited 
		acronym(words);
		cout << words << endl; 
	}

	void acronym(string& words)
	{
		int length = words.length() - 1;
		string acr = "";
		acr = words[0];
		int i = 1;

		for (i=1; i <= length; i++)
		{
			if (words[i] == ' ') 
			{
				acr = acr + words[i+1];
			}
		}

		words = acr; 
	}
