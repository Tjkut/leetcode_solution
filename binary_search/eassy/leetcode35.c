#include <stdio.h>
int searchInsert(int *nums, int numSize, int target)
{
    int left = 0, right = numSize - 1, pos=numSize;
    if(nums[numSize-1]<target){
        return pos;
    }
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            pos = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return pos;
}
int main(){
    int arr[]={1};
    printf("%d",searchInsert(arr,1,1));
}