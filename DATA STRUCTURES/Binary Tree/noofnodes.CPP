#include<bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    struct Node *left , *right;
    Node(int value) {
        this->value = value;
        left=right=NULL;
    }
};

int noOfNodes(Node *root){
    if(!root) return 0;

    return noOfNodes(root->left)+noOfNodes(root->right)+1; // Outputs number of nodes 
    return noOfNodes(root->left)+noOfNodes(root->right)+root->value; // Outputs sum of values of all nodes
}

int main(){
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(15);
    cout<<noOfNodes(root);
    return 0;
}