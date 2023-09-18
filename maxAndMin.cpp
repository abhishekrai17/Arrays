#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 7, 4, 8, 5, 6, 5, 0, 9};
    int min = arr[0];
    int max = arr[0];
    int getArrayLength = sizeof(arr) / sizeof(int);
    for (int i = 0; i < getArrayLength; i++)
    {
        if (arr[i] > max)
        {

            max = arr[i];
        }
        if (arr[i] < min)
        {

            min = arr[i];
        }
    }
    cout << "The maximum of the array is " << max << endl;
    cout << "The maximum of the array is " << min;
}