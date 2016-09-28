// DataProcessing3.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int vec_prod(vector<int> a, vector<int> b);

void print_it3(vector<int> a, vector<int> b)
{
	int temp = 0;
	if (a.size() == b.size())
	{

	}
	else if (a.size() > b.size())
	{
		b.resize(a.size(), 0);
	}
	else
	{
		a.resize(b.size(), 0);
	}

	cout << vec_prod(a, b);
}

int vec_prod(vector<int> a, vector<int> b)
{
	int ress = 0;
	for (int i = 0; i < a.size(); i++)
	{
		ress += a[i] * b[i];
	}
	return ress;
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

	print_it3(a, b);
}