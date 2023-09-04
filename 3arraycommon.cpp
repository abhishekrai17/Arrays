#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {3, 4, 5, 6, 7};
    int c[] = {5, 6, 7, 8, 9};
    int count[9] = {0};
    for (int i = 0; i < 5; i++)
    {
        count[a[i]]++;
        count[b[i]]++;
        count[c[i]]++;
    }
    for (int i = 0; i < 9; i++)
    {
        if (count[i] >= 3)
        {
            cout << "the common numbers are " << i << endl;
        }
    }
}