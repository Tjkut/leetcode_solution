#include<stdio.h>
#include<stdlib.h>
int* searchRange(int *nums,int numSize,int target,int *returnSize){
    int *res=(int*)malloc(2*sizeof(int));
    res[0]=-1;
    res[1]=-1;
    int left=0,right=numSize-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]==target){
            res[1]=mid;
            left=mid+1;//find end
        }
        else if(target>nums[mid]){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    if(res[1]==-1) return res;
    left=0,right=res[1];
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]==target){
            res[0]=mid;
            right=mid-1;
        }
        else if(nums[mid]>target){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    returnSize*=2;
    return res;
}
int main(){
    int nums[]={5,7,7,8,8,10};
    int returnSize;
    int *res=searchRange(nums,6,8,&returnSize);
    printf("%d %d\n",res[0],res[1]);
    return 0;
}