#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
    };

    for (int i = 0; i < 5; i++)
    {
        int x = i;
        int y = 0;
        while (x >= 0 && y <= i)
        {

            cout << arr[x][y] << endl;
            x--;
            y++;
        }
        cout << endl;
    }
}