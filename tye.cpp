#include<bits/stdc++.h>
using namespace std;
struct Node {
    int value;
    struct Node *left , *right;
    Node(int value) {
        this->value = value;
        left = right = NULL;
    }
};

    multimap<int,int> m;
void vertical (Node* root){
    if(!root) return;
    queue<pair<Node* ,int>> q;
    q.push({root,0});
    while(!q.empty()){
        Node* node = q.front().first;
        int hzlDis = q.front().second;
        q.pop();
        m.insert({node->value,hzlDis});
        if(root->left) q.push({root->left , hzlDis-1});
        if(root->right) q.push({root->right , hzlDis+1});
    }
}
int main(){
        /* Construct the following tree
            1
          /   \
         /     \
        2       3
              /   \
             /     \
            5       6
          /   \
         /     \
        7       8
              /   \
             /     \
            9      10
    */
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
    root->right->left->right->left = new Node(9);
    root->right->left->right->right = new Node(10);
    
    vertical(root);
    
    for(auto itr=m.begin() ; itr!=m.end() ; itr++){
        cout<<(itr->first)<<" ";
    }
    return 0;
}














