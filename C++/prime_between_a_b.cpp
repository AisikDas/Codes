#include<iostream>
using namespace std;

int main(){
    int a,b,i;
    cout<<"Enter lower limit: "<<endl;
    cin>>a;
    cout<<"Enter upper limit: "<<endl;
    cin>>b;

    for(int num=a;num<=b;num++){
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(num==i){
            cout<<num<<endl;
        }
    }
    return 0;
}