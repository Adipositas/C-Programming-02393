// Histogram.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "math.h"
using namespace std;


int main()
{
	int l;
	cin >> l;

	int n;
	cin >> n;

	int *numbers = new int[n];
	int *bins = new int[l];

	// Initialize bins
	for (int i = 0; i < l; i++)
	{
		bins[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}

	// Find max - stupid way
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		if (numbers[i] > m)
			m = numbers[i];
	}

	int k = ceil((double)m / (double) l);
	for (int i = 0; i < n; i++)
	{
		int val = numbers[i];
		for (int m = 1; m < l+1; m++)
		{
			if (val > k*(m - 1) - 1 && val <= k*m - 1)
				bins[m-1] += 1;
		}
	}

	for (int m = 0; m < l; m++)
	{
		int out = (k) * m;
		cout << out << ": " << bins[m] << "\n";
	}
}

