// Bag1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	bool run = true;
	vector<int> arr;
	int input;
	string command;

	while (run)
	{
		cin >> command;

		if (command.compare("quit") == 0)
		{
			run = false;
			break;
		}
		// If not quitting lets run
		cin >> input;
		if (command.compare("del") == 0)
		{
			for (int i = arr.size() - 1; i > -1; i--)
			{
				if (arr[i] == input)
				{
					arr.erase(arr.begin() + i);
					break;
				}
			}
		}
		else if (command.compare("qry") == 0)
		{
			if (arr.size() == 0)
				cout << "F";
			for (int i = 0; i < arr.size(); i++)
			{
				if (arr[i] == input)
				{
					cout << "T";
					break;
				}
				if (i == arr.size() - 1)
					cout << "F";
			}
		}
		else if (command.compare("add") == 0)
		{
			arr.push_back(input);
		}
		if (command.compare("debug") == 0)
		{
			for (int i = 0; i < arr.size(); i++)
				cout << arr[i];
		}
	}
}

