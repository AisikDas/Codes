#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,lastDigit;
    float sum=0;
    cout<<"Enter: "<<endl;
    cin>>n;

    float original=n;

    while(n>0){
        lastDigit=n%10;
        sum+=pow(lastDigit,3);
        n/=10;
    }
    cout<<sum<<endl;
    if(original==sum){
        cout<<"Armstrong number"<<endl;
    }else{
        cout<<"Not armstrong number"<<endl;
    }
    return 0;
}