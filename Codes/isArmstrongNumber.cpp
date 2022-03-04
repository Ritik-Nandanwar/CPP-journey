#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int inpnumber;
    cout<<"Enter a number" << endl;
    cin>> inpnumber;
    int result =0;
    int originalnum = inpnumber;
    while(inpnumber > 0){
        int lastdigit = inpnumber%10;
        result += lastdigit*lastdigit*lastdigit;
        inpnumber= inpnumber/ 10;
    }
    if (result == originalnum)
    {
        cout<<"This is a Armstrong number"<<endl;
        cout<<originalnum<<endl;
    }
    else{
        cout<<"Not a Armstrong number"<<endl;
        cout<<originalnum<<endl;
        cout<<result<<endl;
    }
    
    return 0;
}