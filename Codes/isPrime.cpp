#include <iostream>
using namespace std;

int main()
{    
    int number;
    int TWO = 2;
    cout<< "Enter a number" << endl;
    cin >> number;
    for(int i =2 ; i < number ; i++){
        if(number % i ==0) {
            cout<<number;
            cout<<" IS NOT A PRIME NUMBER "<<endl;
            break;
        }
        else{
            cout<<"IS A PRIME 😃"<<endl;
            break;
        }
    }
    
    return 0;
}
