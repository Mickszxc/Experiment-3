#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int arr[10], num = 10, i, largest, smallest;
	double tot = 0;
	double ave = 0;

	cout << "Input any 10 numbers: ";

	for (i = 0; i < num; i++)
	{
		cin >> arr[i];
		tot += arr[i];
		ave = tot / 10;
	}

	largest = arr[0];

	for (i = 0; i < num; i++)
	{
		if (largest < arr[i])
			largest = arr[i];
	}

	smallest = arr[0];

	for (i = 0; i < num; i++)
	{
		if (smallest > arr[i])
			smallest = arr[i];
	}

	cout << "\n" << "The smallest integer would be " << smallest << endl;
	cout << "The largest integer would be " << largest << endl;
	cout << "The total would be " << tot << endl;
	cout << "The average would be " << ave << endl;

	return 0;
}