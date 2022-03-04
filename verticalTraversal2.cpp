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
void vertical(Node *root , int hdis){
    queue<pair< Node* , int>> q;
    multimap<int,int> m;
    if(!root) return;
    q.push({root , 0});
    while(!q.empty()){
        Node* temp = q.front().first;
        int dis = q.front().second;
        q.pop();
        m.insert({dis , temp->value});
        if(temp->left) q.push({temp->left , dis-1}); 
        if(temp->right) q.push({temp->right , dis+1}); 
    }
    int val = 0;
    vector<vector<int>> v;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->second << " ";
    }
}
int main(){
    //        1
    //       / \
    //     2     3
    //    / \   / \
    //   4   5 /   7
    //       6 
    // struct Node *head = new Node(1);
    // head->left = new Node(2);
    // head->right = new Node(3);
    // head->left->left = new Node(4);
    // head->left->right = new Node(5);
    // head->right->left = new Node(6);
    // head->right->right = new Node(7);


        /* 
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
    Node* head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->right->left = new Node(5);
    head->right->right = new Node(6);
    head->right->left->left = new Node(7);
    head->right->left->right = new Node(8);
    head->right->left->right->left = new Node(9);
    head->right->left->right->right = new Node(10);
    int hdis = 0;
    vertical(head ,0);
    return 0;
}
//2nd yr marklist 
//2nd yr fee
//