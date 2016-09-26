
#include <iostream>
using namespace std;


int sum_of_integers(int input)
{
	int results = 0;

	for (int i = 0; i < input + 1; i++)
	{
		if (i % 2 == 0) // Should change counter instead of this.
		{
			results += i;
		}
	}

	return results;
}



int main()
{
	int input = 0;
	int ress = 0;
	cin >> input;

	ress = sum_of_integers(input);
	cout << ress;


	return 0;
}

