#include <iostream>
using namespace std;
int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int maxi = INT16_MIN;
    int profit = INT16_MIN;
    for (int i = 0; i < 6; i++)
    {
        maxi = max(maxi, prices[i]);
        profit = max(profit, maxi - prices[i]);
    }
    cout << profit << endl;
}
// I HAVE DONE THE REVERSE BUY HIGHEST  AND SELL LOWEST
// HIGHEST LOST