#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the first number"<< endl;
    cin>>a;
    cout<<"enter the second number"<< endl;
    cin>>b;
    cout<<"enter the third number"<< endl;
    cin>>c;
    if(a>=b && a>=c){
        cout<<a<<" is the largest number"<< endl;
    }
    else if(b>=a && b>=c){
        cout<<b<<" is the largest number"<< endl;
    }
    else{
        cout<<c<<" is the largest number"<< endl;
    }
}