#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int ,greater<int>> s;
    s.insert(1);
    s.insert(7);
    s.insert(10);
    s.insert(154);
    s.insert(53);
    s.insert(121);
    s.insert(3);
    s.insert(1);
    set<int >::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr<<" ";
    }    return 0;
}
