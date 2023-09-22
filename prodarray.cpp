#include <iostream>
using namespace std;
int main()
{
    int a[] = {10, 3, 5, 6, 2};
    int b[5];
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[(i + 1) % 5] * a[(i + 2) % 5] * a[(i + 3) % 5] * a[(i + 4) % 5];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << endl;
    }
}