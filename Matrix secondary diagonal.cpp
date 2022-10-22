#include <iostream>
using namespace std;
int main()
{
	//Matrix A   3 x 3
	const unsigned row = 3;
	const unsigned  col= 3;
	int A[row][col]
	{
		{3,8,9},
		{3,3,1},
		{6,4,1}
	};
	cout << "Non-main diagonal elements are: " << endl;
	for (int i = 0; i < row; i++)
	{
		cout << A[i][row-i-1] << "\t";	
	}
    return 0;
}


