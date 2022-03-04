#include<bits/stdc++.h>
using namespace std;
struct Node{
    struct Node* left;
    struct Node* right;
    int val;
    Node(int val){
        left=right=NULL;
        this->val=val;
    }
    
};
int main()
{
/* 
            10
          /   \
         /     \
        20       30
              /   \
             /     \
            15       60
          /   \
         /     \
        7       8
              /   \
             /     \
            9      10
*/
    Node* head = new Node(10);
    head->left = new Node(2);
    head->right = new Node(30);
    head->right->left = new Node(15);
    head->right->right = new Node(60);
    // head->right->left->left = new Node(7);
    // head->right->left->right = new Node(8);
    // head->right->left->right->left = new Node(9);
    // head->right->left->right->right = new Node(10);
    return 0;
}