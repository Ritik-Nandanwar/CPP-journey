#include<iostream>
using namespace std;
int fibo(int x){
    if(x<=1) return x;
    return fibo(x-1)+fibo(x-2);
    
}
int main(){
    // int n;
    // cin>>n;
    
    cout<<fibo(9);
    return 0;
}