#include <iostream>
using namespace std;
/* 
������ 1. ��������� ����� �� ���������� � ��������� �� ��� � 
��������� ����� �� ����������� �� ����� ���� ��������� �� ����� �����.
�������� ���� �������� ��� ���� �� �� �� �����.
������� ���������� ��� ����� �� ����� - ������� �� ����������� �� �����(����� ���� �����), 
���� ������� �������������� ���� ����������� 1, 2, 3 � 4 �� ������� ����� ��� ��.
��������� ��������� �����, ���� � ����� � ������ �� �����.
*/

int main()
{  
	unsigned F_number[6] = { 1, 0, 4, 3, 3, 1 };
	cout << "F104331" << endl; 

	unsigned position = 0;
	bool found = false;
	for (int j = 1; j <= 4; j++) // �� ������� 1,2,3,4 ����� ����������� ���� �� ��� � ������
	{
		position = 0;
		for (int i = 0; i < 6; i++) // �� ��������� �� ����������� �����
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


