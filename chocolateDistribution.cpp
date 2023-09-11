#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int count = 2;
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    sort(arr, arr + 6);
    int minimum = INT16_MAX;
    for (int i = 0; i < 5; i++)
    {
        int diff = arr[i+2] - arr[i];
        if (diff < minimum)
        {
            minimum = diff;
        }
    }
    cout << "the least difference is " << minimum << endl;
}