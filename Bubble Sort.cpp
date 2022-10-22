#include <iostream>
using namespace std;
/*4.Ñîðòèðàíå. Ìåòîä íà ïðÿêàòà ðàçìÿíà (ìåõóð÷åòî). 
Ñúñòàâåòå ñõåìà íà óïðàâëåíèå ñúñ ñïèðàíå ïî áðîé èíâåðñèè
è óñïîðåäíî íà íåÿ – ïðîãðàìà.
*/
int main()
{
    int n = 5;
    int A[5] = { 5,7,1,2,4 };
    
    int broqch = 1;
    bool ima_inversiq = true;

    while (ima_inversiq)
    {
        ima_inversiq = false;

        for (int i = 0; i < n - broqch; i++)
        {
            if (A[i] < A[i + 1])
            {
                swap( A[i], A[i + 1] );
                ima_inversiq = true;
            }
        }
        broqch++;
    }
    for (int i = 0; i < 5; i++) { cout <<A[i]<< endl; }
    return 0;
}
