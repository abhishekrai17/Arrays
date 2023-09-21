#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, -2, 4};
    int d = 0;

    for (int i = 0; i < 4; i++)
    {
        int p = 1;
        for (int j = i; j < 4; j++)
        {
            p = p * arr[j];
            if (p > d)
            {
                d = p;
            }
        }
    }
    cout << "The product is " << d << endl;
}