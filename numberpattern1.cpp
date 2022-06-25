#include<iostream>
using namespace std;

int main() {
    int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	    cout<<endl;
        for(int j=1;j<=i;j++){
            if(j==1){
                cout<<"1";
            }
            else if(j==i){
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
    }
}