#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int n,i;
    cout<<"Enter: "<<endl;
    cin>>n;

    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"NON PRIME"<<endl;
            break;
        }
    }
    if(i==n){
            cout<<"PRIME"<<endl;
    }
    
    
    
    return 0;
}