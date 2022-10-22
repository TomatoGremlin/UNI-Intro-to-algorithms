#include <iostream>
using namespace std;
int main()
{
	//Matrix A   3 x 4
	const unsigned row_A = 3;
	const unsigned  col_A = 4;
	int A[row_A][col_A]
	{
		{3,8,9,4},
		{3,3,1,7},
		{6,4,1,2}
	};

	// Matrix B   4 x 2
	const unsigned row_B = 4;
	const unsigned col_B = 2;
	int B [row_B][col_B]
	{
		{2,3},
		{8,4},
		{9,1},
		{4,7}
	};
	// Matrix C   3 x 2
	int C[row_A][col_B] = { 0 };

	// A * B = C
	for (int i = 0; i < row_A; i++)
	{
		for (int j = 0; j < col_B; j++)
		{
			for (int k = 0; k < col_A; k++) 
			{
				C [i][j] += A [i][k] * B [k][j];
			}
		}
	}
	cout << "Matrix C is: " << endl;
	for (int i = 0; i < row_A; i++)
	{
		for (int j = 0; j <col_B; j++){
		cout << C[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}

