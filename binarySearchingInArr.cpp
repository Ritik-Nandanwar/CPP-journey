#include<iostream>
using namespace std;
int searchKey (int arr[] ,int n ,int key){
    int s=0;
    int e=n;
    while (s<=e){
    int mid =(s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            //key in 1st half of array
            e=mid-1;
        }
        else if(arr[mid] < key){
            //key in 2nd half of array
            s=mid+1;
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