#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	const int prov = 3;
	const int week = 7;
	int temperature[prov][week];

	cout << "Input the temperature value of each Provinces." << endl;

	for (int i = 0; i < prov; ++i)
	{
		for (int j = 0; j < week; ++j)
		{
			cout << "Province " << i + 1 << " and Day " << j + 1 << " is "; cin >> temperature[i][j];
		}
	}
	cout << "\n" << "Displaying Values:" << endl;
		
	for (int i = 0; i < prov; ++i)
	{
		for (int j = 0; j < week; ++j)
		{
			cout << "Province " << i + 1 << " and Day " << j + 1 << " = " << temperature[i][j] << endl;
		}
	}

	return 0;
}