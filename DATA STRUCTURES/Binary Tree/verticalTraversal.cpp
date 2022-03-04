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
void vertical(Node *root , map<int,vector<int>> &m , int hdis){
    if(!root) return;
    m[hdis].push_back(root->value);
    vertical(root->left , m,hdis-1); 
    vertical(root->right , m,hdis+1); 
}
int main(){
    //        1
    //       / \
    //     2     3
    //    / \   / \
    //   4   5 /   7
    //       6 
    struct Node *head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    head->right->left = new Node(6);
    head->right->right = new Node(7);
    map<int , vector<int> >m;
    int hdis = 0;
    vertical(head ,m,0 );
    map<int,vector<int>> ::iterator itr;
    for(itr = m.begin() ; itr != m.end() ; itr++){
        for (int i = 0; i < (itr->second).size(); i++)
        {
            cout<<(itr->second)[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}