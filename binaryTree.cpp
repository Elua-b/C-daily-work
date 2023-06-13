#include <bits/stdc++.h>
using namespace std;
class Node {
	public:
		int data;
		Node *left;
		Node *right;
	
		Node(int data) {
			this->data = data;
			this->left = NULL;
			this->right = NULL;	
		}
};
void printTree(Node *root) {
			
	if(root == NULL) {
		return;
	}
			
	cout << root->data << " : \t";
			
	if(root->left != NULL) {
		cout << " L: \t" << root->left->data;
		cout << " R: \t" << root->left->data;
	}
			
	cout << endl;
			
	printTree(root->left);
	printTree(root->right);
}
int main() {
	
	Node *root = new Node(6);
	Node *n1 = new Node(8);
	Node *n2 = new Node(9);
	Node *n3 = new Node(10);
	Node *n4 = new Node(11);
	root->left = n1;
	root->right = n2;
	root->left->left = n3;
	root->left->right = n4;
	
	printTree(root);
	
	return 0;
}