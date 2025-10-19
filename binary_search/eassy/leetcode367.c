#include<stdio.h>
#include<stdbool.h>
bool isPerfectSquare(int x){
    if(x<=1) return x;
    int left=0,right=x/2;
    while(left<=right){
     int mid=(left+right)/2;
     if((long long)mid*mid==x){
        return true;
     } 
    else if((long long)mid*mid>x){
        right=mid-1;
    }
    else{
        left=mid+1;
    }
    }
    return false;
}
int main(){
    int x=2;
    printf("%d",isPerfectSquare(x));
}