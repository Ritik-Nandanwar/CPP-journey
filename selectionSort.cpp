#include <iostream>
#include <climits>
using namespace std;

int main() {
    cout<<"Number of items in array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array items";
    for(int i=0 ; i<n ; i++) {
        int it;
        cin>>it;
        arr[i] = it;
    }
    int smallest = INT_MAX;

    for(int i=0 ; i<n ; i++) {
    for(int j =i+1;j<n;j++){
        
        if(arr[j] < arr[i]){
            int temp;
            temp = arr[j];
            arr[j] = arr[i];
            temp = arr[i];

        }
        
    }}
    for(int i=0 ; i<n ; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}