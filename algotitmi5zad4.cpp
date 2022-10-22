#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <iomanip>


using namespace std;

// obhojdane
int obhojdane(vector<int> arr, int val, int cnt)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (cnt == 10)
        {
            break;
        }
        else
        {
            if (arr[i] == val)
            {
                cnt++;
            }
        }
    }
    return 0;
}

// kotva
int kotva(vector<int> arr, int val, int cnt)
{
    arr.push_back(val);

    int i = 0;

    while (cnt <= 10)
    {
        if (arr[i] == val)
        {
            cnt++;
        }

        i++;
    }

    return 0;
}
// dihotomichno
bool dihotomichno(vector<int> arr, int val, int cnt) {

    sort(arr.begin(), arr.end());
    int size = arr.size();
    int lhs = 0, rhs = size;
    int i;
    while (lhs <= rhs) {
        cnt++;
        i = (rhs + lhs) / 2;
        if (arr[i] == val) {
            return true;
        }
        else if (arr[i] < val) {
            lhs = i + 1;
        }
        else if (arr[i] > val) {
            rhs = i - 1;
        }
    }
    return false;
}

int main()
{
    int searchedValue = rand() % 100;
    int counter = 0;
    vector<int> vectorArr;

    for (int i = 0; i < 2000000; i++)
    {
        vectorArr.push_back(rand() % 100);
    }

    clock_t start;
    double duration;
    start = std::clock();
    obhojdane(vectorArr, searchedValue, counter);
    duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
    cout << "First function: " << endl;
    cout << fixed << showpoint;
    cout << setprecision(4) << "Vreme: " << duration << '\n';

    clock_t start2;
    double duration2;
    start2 = std::clock();
    kotva(vectorArr, searchedValue, counter);
    duration2 = (std::clock() - start2) / (double)CLOCKS_PER_SEC;
    cout << "Second function: " << endl;
    cout << fixed << showpoint;
    cout << setprecision(4) << "Vreme: " << duration2 << '\n';

    clock_t start3;
    double duration3;
    start3 = std::clock();
    dihotomichno(vectorArr, searchedValue, counter);
    duration3 = (std::clock() - start3) / (double)CLOCKS_PER_SEC;
    cout << "Third function: " << endl;
    cout << fixed << showpoint;
    cout << setprecision(4) << "Vreme: " << duration3 << '\n';
    return 0;
}



