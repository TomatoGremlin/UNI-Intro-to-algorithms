#include <iostream>
#include <cmath>
using namespace std;
/*
Задача 1.
Да се състави алгоритъм (схемата на управление ) и програма (в съответствие със схемата)
за пресмятане по два начина на функцията sin(x) с точност 0.000001,
както е дадена в лекциите и на семинар (развита в ред на Маклорен). Първи начин – с пресмянате на факториел (в знаменателя) и втори начин – без пресмятане на факториел.
Обърнете внимение, че аргументът е ъгъл в радиани. Приложете към домашното код и снимки на екран с входа и изхода.
*/
// вариант 1 - с пресмятане на факториел

#define Pi  3.14 // приблизително
int Factorial(int);
double Sinus(double, int);
int main()
{
    cout << "Sin(rad) calculator" << endl;
    cout.precision(6);

    cout << "sin(Pi/8 ) = " << Sinus(Pi/16, 6) << endl;

    cout << endl << "sin(Pi/8) = " << sin(Pi/3) << endl;//за проверка

    return 0;

}

int Factorial(int num)
{
    int a = 1; //връща 1 при num = 0 или num=1
    for (int i = 2; i <= num; i++) a *= i;

    return a;
}
double Sinus(double x, int n)
{
    double Sum = 0;
    int Sign = 1;

    for (int i = 1; i <= n; i++)
    {
        Sum = Sum + (pow(x, 2 * i - 1) / Factorial(2 * i - 1)) * Sign;
        Sign = Sign * -1;

    }
    return Sum;
}
