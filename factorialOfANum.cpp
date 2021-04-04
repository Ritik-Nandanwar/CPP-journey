#include<iostream>
using namespace std;

int factorial(int a){
    int fact , res =1;
    
    for(int i=1; i<=a ; i++){
        res =res*i;
    }
    return res;
}

int main(){
    int b;
    cout<<"Enter a number"<<endl;
    cin>>b;
    cout<<factorial(b);
    return 0;
}