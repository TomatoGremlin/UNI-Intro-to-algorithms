#include <iostream>
#include <algorithm>
using namespace std;

bool Check(char*, int, char);
int main()
{
    setlocale(LC_ALL, "Bulgarian");
     
    char f_name[] = { "104331Ãðàìàäîâà" };
    cout << f_name << endl << endl;
    int sz = 15; // 15 characters
    sort(f_name, f_name+sz);
    cout << "Sorted - > " << f_name << endl << endl;

    cout << boolalpha;
    cout << "Is 'ÿ' there? " << Check(f_name, sz, 'ÿ') << endl << endl;
    cout << "Is 'þ' there? " << Check(f_name, sz, 'þ') << endl << endl;
    cout  << "Is 'ú' there? " << Check(f_name, sz, 'ú') << endl << endl;
    cout << "Is 'î' there? " << Check(f_name, sz, 'î') << endl << endl;

    cout << "Is '9' there? " << Check(f_name, sz, '9') << endl << endl;
    cout << "Is '8' there? " << Check(f_name, sz, '8') << endl << endl;
    cout << "Is '7' there? " << Check(f_name, sz, '7') << endl << endl;
    return 0;
}

bool Check(char* f_name, int sz, char character)
{
    int checks = 0;
    int index_beg = 0;
    int index_end = sz-1; // character #15 is at index #14
    int index_middle;
    while (index_beg <= index_end)
    {
        checks++;

        index_middle = (index_beg + index_end) / 2;
        cout << "At check # " << checks << " Beginning = " << index_beg << ", Middle = " << index_middle << ", End = " << index_end << endl;

        if (f_name[index_middle] == character)
        {
            cout << "Performed checks for character '" << character << "' = " << checks << endl;
            return true;
        }

        if (f_name[index_middle] < character) { index_beg = index_middle + 1; }

        else if (f_name[index_middle] > character) { index_end = index_middle - 1; }
    }
    cout << "Performed checks for character '" << character << "' = " << checks << endl;
    return false;
}
