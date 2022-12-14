#include <iostream>
using namespace std;
/*
4. Съставете схемата на управление и успоредно на нея – програмата за пресмятане на  с алтернативен ред. 
Съставете програма по ДВА начина (т.е. искат се две програми с код и разпечатка на изхода):

a) Сумата се пресмята 10 000 пъти, по брояч. На всеки 500 преминавания през цикъла, 
изчислената стойност за да се извежда на екран до 15 знак след десетичната запетая.

b) Сумата се пресмята ДОТОГАВА, ДОКАТО разликата между две стойности, 
получени последователно, се получи по-малка от 0.0000001. 
Програмата да извежда на екран след колко преминавания през цикъла се постига това условие.

*/
int main()
{   // a)
    int n = 10000;
    double Pi_sum = 0;
    int Znak = -1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 500 == 0)
        {
            cout.precision(16);
            cout << Pi_sum * 4 << endl;
        }
        Pi_sum = Pi_sum + Znak * (1.0 / (2.0 * i - 1));
        Znak = -Znak;
    }
    return 0;
}

