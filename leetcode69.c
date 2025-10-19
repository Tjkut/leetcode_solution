#include <stdio.h>
#include <math.h>
int mySqrt(int x)
{
    int left = 0, right = x/2 +1;
    long long mid,ans;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if ((mid * mid) == x)
        {
            return mid;
        }
        else if ((mid * mid)< x)
        {
            ans=mid;
            left = ans + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", mySqrt(x));
}