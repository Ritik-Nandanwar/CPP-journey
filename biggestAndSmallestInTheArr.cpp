#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<"Enter numbr of inputs"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int minInp = INT_MAX , maxInp = INT_MIN;
    for(int i=0 ; i<n ; i++){
        if(arr[i] > maxInp){
            maxInp = arr[i];
        }
        if(arr[i] < minInp){
            minInp= arr[i];
        }
        
    }
    cout<<"Maximum is " <<maxInp <<  " " << "Minimum is " << minInp << " "<<endl;
    return 0;
}