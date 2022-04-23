#include<iostream>
using namespace std;

int main(){
    int n;
    long fact=1;
    cout<<"Enter: "<<endl;
    cin>>n;
    
    if(n>0){
        for(int i=1;i<=n;++i){
            fact*=i;
        }
        cout<<"Factorial of "<<n<<" = "<<fact<<endl;
    }else{
    cout<<"Factorial of negative number does not exist"<<endl;}
    return 0;
}

// #include<iostream>
// using namespace std;

// long fact(int n){
//     long factorial=1;
//     if(n>0){
//         for(int i=1;i<=n;i++){
//             factorial*=i;
//         }
//         cout<<"Factorial of "<<n<<" = "<<factorial<<endl;
//         return 0;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter number: "<<endl;
//     cin>>n;

//     fact(n);
//     return 0;
// }