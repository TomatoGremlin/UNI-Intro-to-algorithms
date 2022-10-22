#include <iostream>
#include <cmath>
using namespace std;
/*
������ 1.
�� �� ������� ��������� (������� �� ���������� ) � �������� (� ������������ ��� �������)
�� ���������� �� ��� ������ �� ��������� sin(x) � ������� 0.000001,
����� � ������ � �������� � �� ������� (������� � ��� �� ��������). ����� ����� � � ���������� �� ��������� (� �����������) � ����� ����� � ��� ���������� �� ���������.
�������� ��������, �� ���������� � ���� � �������. ��������� ��� ��������� ��� � ������ �� ����� � ����� � ������.
*/
// ������� 1 - � ���������� �� ���������

#define Pi  3.14 // �������������
int Factorial(int);
double Sinus(double, int);
int main()
{
    cout << "Sin(rad) calculator" << endl;
    cout.precision(6);

    cout << "sin(Pi/8 ) = " << Sinus(Pi/16, 6) << endl;

    cout << endl << "sin(Pi/8) = " << sin(Pi/3) << endl;//�� ��������

    return 0;

}

int Factorial(int num)
{
    int a = 1; //����� 1 ��� num = 0 ��� num=1
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
