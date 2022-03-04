#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int value;
	struct Node *left, *right;
	Node(int value){
		this->value = value;
		left = right = NULL;
	}
};
void printit(Node* head){
	cout<<head->value<<endl;
}
int main(){
	struct Node *noob = new Node(1);
	printit(noob);

	return 0;
}