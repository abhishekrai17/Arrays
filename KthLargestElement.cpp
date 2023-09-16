#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    vector<int> arr = {3, 2, 1, 5, 6, 4};
    int k = 2;
    multiset<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        s.insert(arr[i]);
    }
    long long c = 0;
    for (auto i = s.rbegin(); i != s.rend(); i++)
    {
        c++;
        if (k == c)
        {
            cout << *i << endl;
        }
    }
    cout << 0;
}
