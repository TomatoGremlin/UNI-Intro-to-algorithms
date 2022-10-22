#include <iostream>
using namespace std;
int main()
{
    const int n = 5;
    int A[n] = { 1,6,7,8,4 };
    int first = A[0];

    int anchor = 0;
    int Buf = 0;
    int j = 0;

    for (int i = 0; i < n-1; i++) 
    {
        j = i + 1;
        Buf = A[j];
       
        anchor = Buf;
        A[0] = anchor;

        while ( A[j - 1] > Buf ) 
        {
            A[j] = A[j - 1];
            j--;
            A[j] = Buf;
        }
    }
    A[0] = first;

    for (int i = 0; i < n; i++) 
    {
        cout << A[i] << " ";
    }

    return 0;
}

