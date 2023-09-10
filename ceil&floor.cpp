#include <iostream>
using namespace std;
int main()
{
    int arr[] = {9, 8, 7, 8, 5, 4, 3, 2, 1};
    int x = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    int floor = INT16_MIN;
    int ceil = INT16_MAX;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] <= 6)
        {
            floor = max(floor, arr[i]);
        }
        if (arr[i] >= 6)
        {
            ceil = min(ceil, arr[i]);
        }
    }
    cout << "the floor value is " << floor << endl;
    cout << "the ceil valur is " << ceil << endl;
}