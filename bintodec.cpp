#include <iostream>
using namespace std;

    void bintodec( int binnumber) {
    

        int n = binnumber;
        int decnumber=0;
        int power = 1;
    
        
            while (n>0 ){
                int lastdigit = n%10;
                decnumber+= lastdigit*power;
                power= power*2;
                n=n/10;


            }
            cout << decnumber << endl;
        


    } 
    void dectobin ( int decnumber){

        int n= decnumber;
        int binnumber=2;
        int power = 2;
        while ( n<0 ){
            int lastdigit = n%2;
            binnumber+= lastdigit*power;
            power = power/2;
            n= n*2;

        }
        cout << binnumber;
    }
    
    int main()
    {
        bintodec( 100011);
        return 0 ;
         
    }




