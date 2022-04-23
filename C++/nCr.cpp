#include<iostream>
using namespace std;

int fact(int num){
    int facto=1;
    if(num>0){
        for(int i=1;i<=num;i++){
            facto*=i;
        }
        return facto;
    }
    else{
        cout<<"Calculation of negative number does not done here! Thank you"<<endl;
    }
    return 0;
}

int main(){
    int n,r;
    cout<<"Enter the value of n = "<<endl;
    cin>>n;
    cout<<"Enter the value of r = "<<endl;
    cin>>r;

    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<"nCr value is "<<ans<<endl;

    return 0;
}