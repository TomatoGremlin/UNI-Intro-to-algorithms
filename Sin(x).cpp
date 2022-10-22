#include <iostream>
#include <cmath>
using namespace std;
// âàðèàíò 2 - áåç ïðåñìÿòàíå íà ôàêòîðèåë
#define Pi  3.14 // ïðèáëèçèòåëíî

double Sinus(double, int);
int main()
{
    cout << "Sin(rad) calculator" << endl;
    
    cout << "sin(Pi / 12) = " << Sinus(Pi / 12, 10) << endl;
    
    cout << endl << "sin(Pi / 12) = " << sin(Pi/12) << endl;//çà ïðîâåðêà

    return 0;
}

double Sinus(double x, int n)
{
    double Sum = 0;
    double Obsht_chlen = x;
    double Znmn = 1;

    for (int i = 1; i <= n; i++)
    {
        Sum = Sum + Obsht_chlen;
        Znmn = Znmn + 2;
        Obsht_chlen = -Obsht_chlen * x * x / (Znmn * (Znmn - 1));
    }
    return Sum;
}
