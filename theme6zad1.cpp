#include <iostream>
using namespace std;
int main()
{
	const unsigned n = 4;
	int numbers[n] = {3,6,2,1};

	int minimum = numbers[0];
	int position = 0;
	unsigned counter = 0 ;

	for (int i = 0; i < n; i++)
	{
		if (numbers[i] < minimum)
		{
			minimum = numbers[i];
			position = i;
		}

		counter++;
	}

	cout << "Smallest number of all " << minimum << " was at position" << position + 1 << endl;
	cout << "Number of checks = " << counter << endl;
}

