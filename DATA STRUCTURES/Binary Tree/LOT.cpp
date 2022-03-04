#include<bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    struct Node *left , *right;
    Node(int value) {
        this->value= value;
        left = right = NULL;
    }
};

void lot(Node *root ,vector<vector<int>> &ans){
    if(!root) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0 ;i<size ; i++){
            Node *dummy = q.front();
            q.pop();
            if(root->left) q.push(root->left);
            if(root->right) q.push(root->right); 
            level.push_back(dummy->value);    
        }

        ans.push_back(level);
    }
    return;
}

int main(){
    struct Node *head = new Node(1); 
    head->left = new Node(2);
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    head->left->left->left = new Node(6);
    head->right->right = new Node(7);
    head->right->right->right = new Node(8);
    vector<vector<int>> ans;   
    lot(head , ans);
    for(int i=0 ;i<ans.size() ; i++){
        for(int j=0 ;j<ans[i].size() ;j++){
            cout<<ans[i][j];
        }
    }
    return 0;
}