#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1, 3, 2};
    if (arr[1] > arr[2])
    {
        int temp = arr[0];
        arr[0] = arr[2];
        arr[2] = temp;
        sort(arr + 1, arr + 3);
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j] << endl;
        }
    }
    else if (arr[1] < arr[2])
    {
        sort(arr + 1, arr + 3);
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j] << endl;
        }
    }
}
