#include <iostream>
using namespace std;
int addTwoNumbers(int a , int b){
    int result = a+b;
    return result;
}
int main(){
    int a ,b;
    cout<<"Enter two values"<<endl;
    cin>>a;
    cin>>b;
    cout<<addTwoNumbers(a , b);
    return 0;
}