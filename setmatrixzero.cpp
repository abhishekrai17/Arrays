#include <iostream>
using namespace std;
int main()
{
    int A[4][4] = {{1, 1, 1, 4}, {1, 0, 1, 7}, {1, 1, 1, 8}, {0, 3, 4, 9}};
    int P[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (A[i][j] == 0)
            {
                cout << " this index are " << endl;
                for (int u = 0; u < 4; u++)
                {
                    for (int v = 0; v < 4; v++)
                    {
                        if (u == i || v == j)
                        {
                            P[u][v] = 0;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (P[i][j] != 0)
            {
                P[i][j] = A[i][j];
            }
            cout << P[i][j];
        }
        cout << " " << endl;
    }
}