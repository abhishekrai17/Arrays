#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int height[] = {1,
                    8,
                    6,
                    2,
                    5,
                    4,
                    8,
                    3,
                    7};
    int maxarea = 0;
    int left = 0;
    int Length = sizeof(height) / sizeof(int);
    int right = Length - 1;
    while (left < right)
    {
        int width = right - left;
        if (height[left] <= height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
        maxarea = max(maxarea, min(height[left], height[right]) * width);
    }
    cout << maxarea << endl;
}