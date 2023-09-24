#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[] = {1, 3, 3, 5, 7, 5, 5, 7};
    sort(a, a + 8);
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        if (a[i] == a[i + 1])
        {
            cout<<"the repeated elements are "<<a[i]<<endl;
        }
    }
}