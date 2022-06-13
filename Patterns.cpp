#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
void Rectangle(){
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("* ",j);
        }
        printf("\n");
    }
}

void HollowRectangle(){
    for (int i = 0; i < 5; i++)
    {
        // printf("* ",i);
        for (int j = 0; j < 4; j++)
        {
            if (i==0 || i==4)
            {
                printf("* ");
            }
            else{
                if (j==0 || j==3)
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
       

            }
            // printf("* ",j);
        }
        printf("\n");
    }
}

void invrtedHAlfPrmd(){   // Inverted Half Pyramid
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5-i; j >=1 ; j--)
        {
            printf("* ",j);
        }
        printf("\n");
    }
    
}

void halfpyrmidRight(){            // Half pyramid with numbers
    for (int i = 1; i<=5; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
}
void HAlfPrmd(){   //  Half Pyramid after 180 rotation
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j<=5-i)
            {
                printf(" ");
            }
            else{
                printf("*");
            }
        
        }
        printf("\n");
    }
}
void Pyramid(){   //   Pyramid 
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j<=5-i)
            {
                printf(" ");
            }
            else{
                printf("* ");  //only difference form half pyrmid
            }
            
        }
        printf("\n");
    }
}

void FloydsTriangle(){       // Half pyramid with 1 to 15 numbers  
    int x = 1;
    for (int i = 1; i<=5; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }
    
}

void Butterfly(){
    int n = 4;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("* ",i);
        }
        int space = 2*n - 2*i ;    // important formula for spacing in butterfly
        for (int i = 0; i < space; i++){
            printf("  ");
        }
        for (int j = 1; j <= i; j++){
            printf("* ",i);
        }
        printf("\n");
    }

    // downward wings
    for (int i = n; i >=1; i--){
        for (int j = 1; j <= i; j++){
            printf("* ",i);
        }
        int space = 2*n - 2*i ;
        for (int i = 0; i < space; i++){
            printf("  ");
        }
        for (int j = 1; j <= i; j++){
            printf("* ",i);
        }
        printf("\n");
    }
    
}

void zigzag_pattern(int n){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%4==0 && i!=2){
                cout<<"* ";
            }
            else if(i==2 && (i+j)%2==0){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
void invertedNumberPattern(){
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j<=5+1-i; j++)
        {   
            printf("%d ",j);
        }
        printf("\n");
    }
    
}

void zeroOnePattern(){
    for (int i = 1; i <=5; i++)
    {
        for (int j= 1; j <= i; j++)
        {
            if((i+j)%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
void Rhombus(){
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if (j<=6-i)
            {
                printf(" ");
            }
            else{
                printf("* ");
            }
            
        }
        // printf("\n");
        // reverse pyramid
        for (int j = 1; j < 6; j++)
        {
            if (j<=6-i)
            {
                printf("* ");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
}
void numberpyramid(){
    for (int i = 1; i <=5; i++)
    {
        int num=1;
        for (int j = 1; j <= 5; j++)
        {
            if (j<=5-i)
            {
                printf(" ");
            }
            else{
                printf("%d ",num++);
            }
        }
        printf("\n");
    }
    
}
void palindromic(int n){
   for (int i = 1; i <= n; i++)
    {
        int num=i;
        for (int j = 1; j <= n+i-1; j++)
        {
            if (j<=5-i)
            {
                printf("  ");
            }
            else
            {
                if(i>1 && j<n){
                    printf("%d ",num);
                    num--;
                }
                else{
                    printf("%d ",num);
                    num++;
                }   
            }   
        }
        printf("\n");
    }
}
void starpattern(int n){
   for (int i = 1; i <= n; i++)
    {
        // int num=i;
        for (int j = 1; j <= n-i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <=2*i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = n; i >=1; i--)
        {
            // int num=i;
            for (int j = 1; j <= n-i; j++)
            {
                printf("  ");
            }
            for (int j = 1; j <=2*i-1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
}
int main(){
    Rectangle();
    printf("\n");
    HollowRectangle();
    printf("\n");
    invrtedHAlfPrmd();
    printf("\n");
    HAlfPrmd();
    printf("\n");
    Pyramid();
    printf("\n");
    halfpyrmidRight();
    printf("\n");
    FloydsTriangle();
    printf("\n");
    Butterfly();
    printf("\n");
    zigzag_pattern(9);
    printf("\n");
    invertedNumberPattern();
    printf("\n");
    zeroOnePattern();
    printf("\n");
    Rhombus();
    printf("\n");
    numberpyramid();
    printf("\n");
    palindromic(5);
    printf("\n");
    starpattern(4);
    printf("\n");
    return 0;
}