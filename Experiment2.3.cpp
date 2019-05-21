#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void Reverse(string letters);

int main()
{
	string letters = "";

	cout << "Input any letters: "; getline(cin, letters);
	cout << "\n" << "Reversed input letters: ";
	Reverse(letters);
	cout << endl;

	return 0;

}

void Reverse(string letters)
{
	if (letters == "")
	{

		return;

	}
	else
	{

		Reverse(letters.substr(1));
		cout << letters.at(0);

	}
}