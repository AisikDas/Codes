#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"Input a character: "<<endl;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Hola"<<endl;
        break;
    case 'c':
        cout<<"Namaste"<<endl;
        break;
    case 'd':
        cout<<"Hi"<<endl;
        break;
    case 'e':
        cout<<"Salut"<<endl;
        break;
    case 'f':
        cout<<"Ciao"<<endl;
        break;
    
    default:
        cout<<"I am still learning more!"<<endl;
        break;
    }
    return 0;

}