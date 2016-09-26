// PiApprox.cpp : Defines the entry point for the console application.
//
// ConsoleApplication3.cpp : Defines the entry point for the console application.

#include <iostream>
using namespace std;

double pi(int n)
{
	double pi_approximate = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			pi_approximate += ((1.0) / (2 * i + 1)) * 4;
		}
		else
		{
			pi_approximate += ((-1.0) / (2 * i + 1)) * 4;
		}

	}
	return pi_approximate;
}



int main()
{
	int input = 0;
	cin >> input;
	cout << pi(input);
	return 0;
}

