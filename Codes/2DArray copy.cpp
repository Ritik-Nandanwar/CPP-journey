#include<iostream>
using namespace std;

int main(){
    int n , m ,key;
    cin>>n>>m>>key;
    int arr[n][m];
    for(int i =0;i<n ;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    bool flag= false;
    for(int i =0;i<n ;i++){
        for(int j=0;j<m;j++){
            // cout<<arr[i][j]<<" ";
            if(arr[i][j] == key){
                cout<<i<<" "<< j<<endl;
                flag= true;
            }
        }
        // cout<<endl;
    } 
    if(flag){
            cout<<"FOUND";
        }
        else{
            cout<<"NOT FOUND";
        }
    return 0;
}