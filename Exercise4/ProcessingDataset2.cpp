// ProcessingDataset2.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void print_it2(vector<int> a, vector<int> b)
{
	int min;
	int max;
	int control;
	if (a.size() == b.size()) // If same size, just print
	{
		for (int i = 0; i < b.size(); i++)
		{
			cout << a[i] << " " << b[i];
			if (i != a.size() - 1)
				cout << " ";
		}
	}
	else
	{
		// If a is largest
		if (a.size() > b.size())
		{
			min = b.size();
			max = a.size();
			control = 0;
		} // Else b is largest
		else
		{
			min = a.size();
			max = b.size();
			control = 1;
		}

		// Run until minimum and just print
		for (int i = 0; i < min; i++)
		{
			cout << a[i] << " " << b[i];
		}
		cout << " ";
		// Run for the rest, and take care of no spacing at end
		for (int i = min; i < max; i++)
		{
			if (control == 0)
				cout << a[i];
			else
				cout << b[i];
			if (control == 0)
			{
				if (i != a.size() - 1) // No spacing at the end
					cout << " ";
			}
			else
			{
				if (i != b.size() - 1) // No spacing at the end
					cout << " ";
			}
		}
	}
}

int main()
{
	vector<int> a;
	vector<int> b;
	string letter = "a";
	string in;
	int num_in;


	//for (int k = 0; k < number_in; k++)
	while (!cin.eof())
	{
		cin >> letter;
		cin >> num_in;


		if (letter.compare("a") == 0 && cin.eof() != true)
		{
			a.push_back(num_in);
		}
		else if (letter.compare("b") == 0 && cin.eof() != true)
		{
			b.push_back(num_in);
		}
	}

	print_it2(a, b);
}

