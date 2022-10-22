#include <iostream>
using namespace std;
/*4. Реализирайте съставената по предходната тoчка програма и проверете дали работи
за събиране на числа (представени като вектори) в десетичен код.
Предайте снимка на екран с кода и изход.
*/
int main()
{
	int Prenos = 0;
	int Sum = 0;

	int a[4] = { 0,2,3,5 };
	int b[4] = { 9,7,8,4 };
	int c[5];

	for (int k = 3; k >= 0; k--)
	{
		Sum = a[k] + b[k] + Prenos;
		c[k + 1] = Sum % 10;
		Prenos = Sum / 10;
	}
	c[0] = Prenos;
	
	for (int i = 0; i < 4; i++)cout << a[i];
	cout << "+";
	for (int i = 0; i < 4; i++)cout << b[i];
	cout << "=";
	for (int i = 0; i < 5; i++)cout << c[i];

	return 0;
}








