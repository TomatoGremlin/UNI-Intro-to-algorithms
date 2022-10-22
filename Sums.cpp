#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int Sum = 0;
    for (int i = 0; i <= n; i++)
    {
        Sum = Sum + i * i;
    }
    cout << Sum;


    int n;
    cin >> n;
    int Sum = 0;
    for (int i = 0; i <= n; i++)
    {
        Sum = Sum + (i*i - 2*i);
    }
    cout << Sum;

    int n;
    cin >> n;
    int Sum = 0;
    for (int i = 0; i <= n; i++)
    {
        Sum = Sum + (i*i*i - 2*i);
    }
    cout << Sum;

}

