#include <iostream>
using namespace std;
int Find_Index(int* array, int size, int buf){
    int beg = 0;
    int end = size;
    int mid = 0;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (array[mid] == buf) {  return mid + 1; }
        else if (array[mid] < buf) { beg = mid + 1; }
        else // (array[mid] > buf)
        {
            end = mid - 1;
        }
    }
    return beg;
}
int main(){
    const int n = 5;
    int A[n] = { 1,8,0,2,4 };
    
    int Buf = 0;
    int j = 0;
    int index = 0;

    for (int i = 1; i < n ; i++)
    {
        Buf = A[i];
        index = Find_Index(A, i, Buf);
        j = i;

        while (j > index) { //shift every element from the found index to i to the right
            A[j] = A[j - 1];
            j--;
        }
        A[j] = Buf; // inserting the number in the correct spot
    }
   
    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++) {  cout << A[i] << " ";  }
    return 0;
}
