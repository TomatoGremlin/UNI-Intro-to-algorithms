#include <iostream>
using namespace std;
int main()
{
	const int n = 9;
	int A[n] = {2, 3 , 4 , 4 , 6 , 0 , 1 , 1 ,7 };
	int B[n];

	int position;
	int minimum = 0;
	int maximum = A[0];
	
	for (int i = 1; i < n; i++)
	{
		if (A[i] > maximum)
		{
			maximum = A[i];
		}
	}

	B[n - 1] = maximum;

	for (int i = 0; i < n-1; i++)
	{
		minimum = A[0];
		position = 0;

		for (int j = 1; j < n; j++)
		{
			if (A[j] < minimum)
			{
				minimum = A[j];
				position = j;
			}
		}

		B[i] = minimum;
		A[position] = maximum;
	}
	return 0;
}

