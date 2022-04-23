#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter first num: "<<endl;
    cin>>n1;
    cout<<"Enter second num: "<<endl;
    cin>>n2;

    char op;
    cout<<"Enter the operator"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    
    default:
        cout<<"Enter an poreper operator"<<endl;
        break;
    }
    return 0;
}