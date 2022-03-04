#include <iostream>
using namespace std;

int main(){
    int inpnumber;
    int reverse =0;
    cout<<"Enter a number"<<endl;
    cin>> inpnumber;
    while(inpnumber >0){
        int lastdigit = inpnumber%10;
        reverse = reverse*10 + lastdigit;
        inpnumber/=10;
    }
    cout<<reverse;
    return 0;
}