#include<bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    struct Node *left , *right;
    Node(int value){
        this->value = value;
        left=right= NULL;
    }
};

int getHeight(Node *root){
    if(!root) return 0;
    int lh = getHeight(root->left);
    int rh = getHeight(root->right);
    return max(lh,rh) +1;
}

int main(){
    struct Node *head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    head->left->left->left = new Node(6);
    head->left->left->left->left = new Node(7);
    cout<<getHeight(head);
    return 0;
}