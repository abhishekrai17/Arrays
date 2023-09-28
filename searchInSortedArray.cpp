#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 6, 7, 2, 3, 4};
    int mid, key = 4;
    int start = 0, last = 5;
    cout << "the program starts" << endl;

    while (start < last)
    {
        mid = (start + last) / 2;
        cout << mid << endl;
        if (arr[mid] == key)
        {
            cout << key << endl;
            break;
        }
        else if (arr[mid] > key)
        {
            last = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
}