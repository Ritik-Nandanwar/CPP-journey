#include<iostream>
#include<array>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of items in array" <<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array"<<endl;
    for(int i=0 ; i<4 ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<4 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}