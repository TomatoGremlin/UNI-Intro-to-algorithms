#include <iostream>
using namespace std;
/* 4. Реализирайте съставената по предходната тoчка програма и проверете дали работи
за събиране на числа (представени като вектори) в десетичен код.
Предайте снимка на екран с кода и изход.
*/
int main()
{
	int Prenos = 0;
	int Sum = 0;
	
	int n;
	cout << "Enter how many digits you want the numbers to have:";
	cin >> n;

	int* a = new int[n];
	int* b = new int[n];
	int* c = new int[n]; // <-- remainder

	cout << endl << "a= ";
	for (int i = 0; i < n; i++)cin >> a[i];

	cout << endl << "b= ";
	for (int i = 0; i < n; i++)cin >> b[i];

	for (int k = n-1; k >= 0; k--)
	{
		Sum = a[k] + b[k] + Prenos;
		c[k] = Sum % 10;
		Prenos = Sum/10;
	}

	for (int k = 0; k < n; k++)cout << a[k];
	cout << endl << "+";
	for (int k = 0; k < n; k++)cout << b[k];
	cout << "=";
	for (int k = 0; k < n; k++)cout << c[k];
	
	for (int k = 0; k < n; k++)
	{	
		c[k]=Prenos;
	}

	if (a != nullptr)
	{
		delete[] a;
		a = nullptr;
	}

	if (b != nullptr)
	{
		delete[] b;
		b = nullptr;
	}

	return 0;
}
