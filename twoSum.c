#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *return_indeces = (int*)malloc(*returnSize);
    for(int i=0;i<=numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                return_indeces[1] = j;
                return_indeces[0] = i;
            }
        }
    }
    return return_indeces;
}

int main(){
    int arr[4]={2,7,11,15};
    int n = 8;
    int *ptr = twoSum(arr,4,22,&n);
    for(int i=0;i<2;i++){
        printf("%d ,",ptr[i]);
    }
    return 0;
}