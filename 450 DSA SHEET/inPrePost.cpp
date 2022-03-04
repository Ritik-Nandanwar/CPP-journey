#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    struct Node *left, *right;
    Node(int value){
        this->value = value;
        left=right=NULL;
    }
};
void in(Node* head){
    if(head == NULL) return;
    // while(head != NULL){
        in(head->left);
        cout<<head->value<<" ";
        in(head->right);

    // }
}
void pre(Node* head){
    if(head == NULL) return;
    // while(head != NULL){
        cout<<head->value<<" ";
        pre(head->left);
        pre(head->right);

    // }
}
void post(Node* head){
    if(head == NULL) return;
    // while(head != NULL){
        post(head->left);
        post(head->right);
        cout<<head->value<<" ";

    // }
}
int main(){
    struct Node* head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    cout<<"IN ORDER ";
    in(head);
    cout<<"\n";
    
    cout<<"PRE ORDER ";
    pre(head);
    cout<<"\n";

    cout<<"POST ORDER ";
    post(head);
    cout<<"\n";

    return 0;
}