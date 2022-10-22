#include <iostream>
using namespace std;
// 6 задача
int Print(int* numbers, int n) 
{
    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {
            cout << numbers[i];
        }
        else 
        {
            cout << ", " << numbers[i];
        }
    }
    cout << endl;
    return 0;
}
int main()
{
    setlocale(LC_ALL, "Bulgarian");
   // int numbers[] = { 79, 52, 6 , 5, 16 };
    int numbers[] = { 29, 19, 89, 49, 88 };
    int n = 5;

    int minimum = 0;
    int checks = 0;
    int position = 0;

    for (int i = 0; i < n - 1; i++)
    {

        cout << "Състояние " << i << ": ";
        Print(numbers, n);

        checks = 0;
        minimum = numbers[i];
        position = i;
       
        for (int j = i + 1; j < n; j++)
        {
            if (numbers [j] < minimum)
            {
                minimum = numbers[j];
                position = j;
               
            }
            checks++;
            cout << "i = "<< i << " j = "<< j << " min index = " << position << endl;
        }
        numbers[position] = numbers[i];
        numbers[i] = minimum;
    }
    return 0;
}



