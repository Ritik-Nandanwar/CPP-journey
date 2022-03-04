#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
    queue <int> qu;
    // PUSH
    qu.push(1);
    qu.push(3);
    qu.push(2);
    // POP
    qu.pop();
    // FRONT OF QUEUE
    cout<<qu.front();
    qu.pop();
    // FRONT OF QUEUE
    cout<<qu.front();
    qu.pop();
    // BACK OF QUEUE
    cout<<qu.back();
    return 0;
}