#include <iostream>
#include <cmath>

using namespace std;

struct Node{
	int data;
	struct Node *right;
	struct Node *left;
	
	Node(int val){
		data = val;
		left = NULL;
		right =  NULL;
	}
	
};

int height(Node *root){						// Signature

	if (root == NULL)						// Base Condition
		return 0;
		
	int left = height(root -> left);		// Function on smaller input
	int right = height(root -> right);
	
	return 1 + max(left, right);
}

int main(){
	
	/*	Tree Structure
	
			10
		   /  \
		  20   30
		   \
		    40	
	*/
	
	
	struct Node *root = new Node(10);
	root -> left = new Node(20);
	root -> right = new Node(30);
	root -> left -> right = new Node(40);
	
	cout << "Height of the Tree: " << height(root);
}
