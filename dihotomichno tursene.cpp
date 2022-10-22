#include <iostream>
using namespace std;

bool Check(int* f_name, int sz, int character)
{
    int checks = 0;
    int index_beg = 0;
    int index_end = sz - 1; 
    int index_middle;
    while (index_beg <= index_end)
    {
        checks++;

        index_middle = (index_beg + index_end) / 2;
        cout << "At check # " << checks << " Beginning = " << index_beg << ", Middle = " << index_middle << ", End = " << index_end << endl;

        if (f_name[index_middle] == character)
        {
            
            return true;
        }

        if (f_name[index_middle] < character) { index_beg = index_middle + 1; }

        else if (f_name[index_middle] > character) { index_end = index_middle - 1; }
    }
    
    return false;
}
int main()
{
    int a[8] = { 1,3,5,7,9,23,45,12347 };
    Check(a ,8, 5);
    return 0;
}

