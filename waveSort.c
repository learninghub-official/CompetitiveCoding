#include<stdio.h>
#include<stdlib.h>

void swap(int a[], int i , int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void zigzag(int a[] , int n){
    for (int i = 1; i < n-1; i+=2)
    {
        if (a[i]<a[i-1])
        {
            swap(a,i,i-1);
        }
        if (a[i]<a[i+1] && i <= n-2)
        {
            swap(a,i,i+1);
        }
        
    }
    
}
void printfunc(int a[] , int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int a[] = {4,3,7,8,6,2,1};
    // int a[] = {1,3,4,7,5,6,2};
    int n = 7 ;
    printfunc(a, n);
    printf("After wave sorting \n");
    zigzag(a , n);
    printfunc(a ,n);
    return 0;
}

