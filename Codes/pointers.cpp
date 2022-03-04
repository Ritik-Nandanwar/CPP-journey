#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    cout<<a <<" ";
    *ptr = 20;
    cout<<a;
    return 0;
}