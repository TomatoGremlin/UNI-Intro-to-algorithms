#include <iostream>
using namespace std;

int main()
{
   
    int a; // base
    cout << "a = ";
    cin >> a;
    
    int n; // power
    cout << "n = ";
    cin >> n;
    
    int B = 1; 
    int Sum = 0; 
    
    for (int i = 1; i <= n; i++)
    {
        Sum = 0;
        for (int j = 1; j <= a; j++)
        {
            Sum = Sum + B;
        }
        B = Sum;
    }
    cout << "a^n = " << Sum << endl;
    return 0;
}



