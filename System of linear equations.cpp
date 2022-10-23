#include <iostream>
using namespace std;
int main()
{   // 3 x 4 matrix
    const int n = 3;
    const int m = n+1;
    double Matrix[n][m] = 
    {{2, 0, 0, 134},
     {1, -3, 3, 12},
     {4, 3, 5, -36}};
    
    double x_answers[n];
    double div = 0.0;
    double multi = 0.0;
    for (int i = 0; i < n; i++) // ðåäîâå
    {
        div = Matrix[i][i];

        for (int j = i; j < m; j++) // êîëîíè
        {
            Matrix[i][j] = Matrix[i][j] / div;
        }
        for (int j = i + 1; j < n; j++) {
            multi = Matrix[j][i];

            for (int k = 0; k < m; k++) {
                Matrix[j][k] -= multi * Matrix[i][k];
            }
        }

    }
    // -----------------------------------
    cout << "Matrix after SLU =" << endl;
    for (int i = 0; i < n; i++) {   // ðåäîâå
        for (int j = 0; j < m; j++) {     // êîëîíè
            if (j == m-1) cout << " | ";
            cout << Matrix[i][j] << '\t';
        }
        cout << endl;
    }
    // -----------------------------------
    cout << endl << "Answers:" << endl;
    for (int i = n - 1; i >= 0; i--) { 
        x_answers[i] = Matrix[i][n];

        for (int j = n-1; j > i; j--) { 
            x_answers[i] -= Matrix[i][j] * x_answers [j];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "X" << i + 1 << " = " << x_answers [i] << endl;
    } 
    return 0;
}
