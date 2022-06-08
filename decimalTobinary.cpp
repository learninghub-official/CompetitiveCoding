#include<stdio.h>
#include<string.h>
#include<iostream>
// #include<bits/stdc++.h>

using namespace std;
void Convert(int n){
    string binary;
    while (n!=0)
    {
        if (n%2==0)
        {
            binary=binary+'0';
        }
        else{
            binary = binary+'1';
        }
        n=n/2;
        // string = binary+'0'+'1';
    }
    // reverse(binary.begin(),binary.end());
    for(int i=binary.length();i>=0;i--){
        cout<<binary[i];
    }
    cout<<endl;
    
}
int main(){
    Convert(8);
    return 0;
}