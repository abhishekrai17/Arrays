#include <iostream>
using namespace std;
int main()
{
    int arr[] = {30, 39, 58, 27, 76, 25, 94};
    int diff = INT16_MIN;
    int p = 0;
    int q = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if ((arr[j] - arr[i]) > diff)
            {
                diff = arr[j] - arr[i];
                p = j;
                q = i;
            }
        }
    }
    cout << "the difference is " << diff << " and the index are " << q << " and " << p << endl;
}