#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define v               vector<int>
#define vv              vector<vector<int>>
#define f(n)            for(int i=0 ;i<n;i++)
using namespace std;

struct Node{
    int data;
    struct Node *left , *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};
int isBST(int l , int r,Node *head ){
    if(!head) return true;
    // if(head->right && head->value>head->right->value);
    // if(head->left && head->value<head->left->value);
    // if( !isBST(head->left) || !isBST(head->right)){
    //     return 0;
    // }
    // return 1;
    if(head->data >r || head->data<l) return false;
    cout<<"L "<<l<<" "<<"R "<<r<<endl; 
    if(isBST(l,head->data,head->left) && isBST(head->data+1,r,head->right) ) return true;
    return false;
  }
//     int isBST(Node *node)
// {
//   if (node == NULL)
//     return 1;
     
//   /* false if left is > than node */
//   if (node->left != NULL && node->left->data > node->data)
//     return 0;
     
//   /* false if right is < than node */
//   if (node->right != NULL && node->right->data < node->data)
//     return 0;
   
//   /* false if, recursively, the left or right is not a BST */
// //   if (!isBST(node->left) || !isBST(node->right))
// //     return 0;
     
//   /* passing all that, it's a BST */
//   return isBST(node->left) and isBST(node->right);
// // }
// }
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

    // Node *root = new     Node(4);
    // root->left = new    Node(2);
    // root->right = new   Node(5);
    // root->left->left = new  Node(1);
    // root->left->right = new     Node(3);
    cout<<isBST(INT_MIN, INT_MAX,head);
    return 0;
}