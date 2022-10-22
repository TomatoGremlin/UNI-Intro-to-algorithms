#include <iostream>
using namespace std;
/* 
Задача 1. Съставете схема на управление и успоредно на нея – 
програмен текст на претърсване на масив чрез обхождане на целия масив.
Изведете броя проверки “ти хикс ли си” на екран.
Пуснете програмата над масив от числа - цифрите на факултетния ви номер(взети като числа), 
като търсите последователно дали стойностите 1, 2, 3 и 4 се намират вътре или не.
Предавате програмен текст, вход и изход – снимка на екран.
*/

int main()
{  
	unsigned F_number[6] = { 1, 0, 4, 3, 3, 1 };
	cout << "F104331" << endl; 

	unsigned position = 0;
	bool found = false;
	for (int j = 1; j <= 4; j++) // за числата 1,2,3,4 които проверяваме дали ги има в номера
	{
		position = 0;
		for (int i = 0; i < 6; i++) // за обхождане на факултетния номер
		{
			position++;
			if (F_number[i] == j)
			{
				found = true;
				cout << boolalpha << found << " Number " << j << " was - found - at position -> " << position << endl;
			}
			else {
			cout << "Number " << j << " was NOT found at position " << position << endl;
			}
		}
		cout << endl << endl;
	}
	return 0;
}


