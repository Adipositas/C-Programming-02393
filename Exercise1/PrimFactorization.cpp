// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

void prime_factorization(int input)
{
	int value = 1;
	
	for (int counter = 2; counter < input + 1; counter++)
	{

		if (input % counter == 0)
		{	
			cout << counter;

			if (input / counter == 1)
				break;

			cout << " * ";
			prime_factorization(input / counter);
			break;
		}
	}
}

void prime_factorization1(int input)
{
	bool keep_going = true;
	int counter = 2;

	while (keep_going)
	{
		if (input == 0)
		{
			cout << "\n";
			break;
		}
		if (input % counter == 0)
		{
			cout << counter;
			cout << " * ";
			prime_factorization(input / counter);
			keep_going = false;
		}
		else
		{
			counter += 1;
		}
	}
}

int main()
{
	int input = 0;
	cin >> input;
	
	prime_factorization(input);
	return 0;
}

