#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.

*/
int max_of_four(int a, int b, int c, int d){
    int big1 , big2;
    if(a != b){
        if(a>b){
        big1 = a;
        }
        else{
            big1 =b;
        }
    }
    if(c !=d){
        if(c != d){
            if(c>d){
                big1 = c;
            }
            else{
                big1 =d;
            }
        }
    }
    if(big1 > big2){
        return big1;
    }
    else{
        return big2;
    }
    
}
int main() {
    int a, b, c, d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cout<< max_of_four(a, b, c, d);
    return 0;
}