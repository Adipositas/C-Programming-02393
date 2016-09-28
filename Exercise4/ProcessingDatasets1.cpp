// ProcessingDatasets1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void print_it(vector<int> a)
{
	sort(a.begin(), a.end());
	for (int i = 0; i < a.size();i++)
	{
		cout << a[i];
		if (i != a.size() - 1) // No spacing at the end
			cout << " ";
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

	print_it(a);
	cout << " "; // pauses
	print_it(b);
}

