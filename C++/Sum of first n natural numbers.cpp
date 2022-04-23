#include<iostream>
using namespace std;

int sum(int n){
    int Sum = (n*(n+1))/2;
    cout<<"Sum till is "<<n<<" = "<<Sum<<endl;
    return Sum;
}

int main(){
    int n;
    cout<<"Enter last value: "<<endl;
    cin>>n;

    sum(n);
    return 0;

}