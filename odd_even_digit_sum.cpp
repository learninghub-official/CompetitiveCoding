
#include<stdio.h>
#include<iostream>
int main()
{
    int num, evenSum=0, oddProd=1, rem;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(num>0)
    {
        rem = num%10;
        if(rem%2==0)
            evenSum = evenSum + rem;
        else
            oddProd = oddProd * rem;
        num = num/10;
    }
    printf("\nSum of Even Digit = %d", evenSum);
    printf("\nProduct of Odd Digit = %d", oddProd);
  
    return 0;
}