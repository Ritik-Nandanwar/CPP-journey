#include<iostream>
#include<climits>
using namespace std;

int searchKey (int arr[] , int n , int key){
    for(int i = 1; i<n ; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    cout<<"Enter numbr of inputs"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    cout<<searchKey(arr , n ,key);
    return 0;
}