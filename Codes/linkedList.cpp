#include<iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
};
void printList(Node* n){
    while(n!= NULL){
        cout<<n->value<<" ";
        n=n->next;
    }

}
int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head -> value= 1;
    head -> next = second;
    
    second -> value= 2;
    second -> next = third;
    
    third -> value= 3;
    third -> next = NULL;
    
    printList(head);

    return 0;
}