#include<bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    struct Node *left , *right;
    Node(int value){
        this->value = value;
        left = right = NULL;
    }
};
int getHeight(Node *root){
    if(!root) return 0;
    int lh = getHeight(root->left);
    int rh = getHeight(root->right);
    return max(lh , rh) +1;
}
int getDia(Node *root ,int &maxi){
    if(!root) return 0;
    int lh = getDia(root->left,maxi);
    int rh = getDia(root->right,maxi);
    maxi = max(maxi , lh+rh);
    return 1+max(lh,rh);
}
int main(){
    struct Node *head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->right->right = new Node(8);
    head->right->right->right = new Node(8);
    head->right->right->right->right = new Node(8);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    head->left->left->left = new Node(6);
    head->left->left->left->left = new Node(7);
    int maxi=0;
    getDia(head , maxi);
        cout<<maxi;
    return 0;
}