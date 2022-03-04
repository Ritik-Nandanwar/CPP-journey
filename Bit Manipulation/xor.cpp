#include<bits/stdc++.h>
using namespace std;
int main(){
    // swap using XOR
    // int a=4;
    // int b=56;
    // cout<<"Before swap"<<endl;
    // cout<<"a = "<<a <<" b = "<<b<<endl;;
    // a=a^b;//a=4^56
    // b=a^b;//b=(4^56)^56 => b=4
    // a=a^b;//a=4^56^4 => a=56
    // cout<<"a = "<<a <<" b = "<<b;
    // return 0;

    //XOR of all number from 1 to N
    int xorr =0;
    for(int i= 0 ;i<=5 ;i++){
        xorr = xorr^i;
    }                                            
    cout<<xorr;
    return 0;
}