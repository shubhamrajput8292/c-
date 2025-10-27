#include <iostream>
using namespace std;
int main()
{
    
int x = 2, y = 5;
int exp1 = (x * y / x);
int exp2 = (x * (y / x));
cout << exp1 << ",";
cout << exp2 << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int x= 10, y= 5;
    int exp1 = (y*(x/y+x/y));
    int exp2 = (y*x/y+y*x/y);
    cout << exp1 << ",";
    cout << exp2 << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int x = 200, y= 500,z= 100;
    if(x > y && y>z){
        cout<<"Hello\n";
    }
    if(z>y&& z<x){
        cout<<"c++\n";

    }

    if((y+200) < x&& (y+150) , z){
        cout<<"Hello c++\n";
    }
}