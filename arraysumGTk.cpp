#include <iostream>
using namespace std;
bool check(int a[], int b[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] + b[i] >= k)
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {4, 5, 6, 7};
    int k, n = 4;
    cout << "enter the value of the sum" << endl;
    cin >> k;

    int res = check(a, b, n, k);
    cout << "the result is " << res << endl;
}