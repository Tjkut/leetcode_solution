#include <stdio.h>
#include <stdbool.h>
int sumArr(int *arr,int size_arr){
    int sum=0;
    for(int i=0;i<size_arr;i++){
        sum+=arr[i];
    }
    return sum;
}
int maxArr(int *num,int size_num){
    int max=num[0];
    for(int i=1;i<size_num;i++){
if(max<num[i]) max=num[i];
    }
    return max;
}
bool check(int *arr, int size_arr, int mid,int k)
{
    int sum = 0, split = 1;
    for (int i = 0; i < size_arr; i++)
    {
        if ((sum + arr[i]) > mid)
        {
            split++;
            sum = arr[i];
        }
        else{
            sum+=arr[i];
        }
    }
    if(split<=k) return true;
    return false;
}
int splitArray(int *num,int numSize,int k){
int right=sumArr(num,numSize);
int left=maxArr(num,numSize);
int minsum=right;
while(left<=right){
    int mid=(left+right)/2;
    if(check(num,numSize,mid,k)){
        minsum=mid;
        right=mid-1;
    }
    else{
        left=mid+1;
    }
}
return minsum;
}
int main(){
    int nums[]={1,4,4};
    int res=splitArray(nums,3,3);
    printf("%d\n",res);
    return 0;
}
