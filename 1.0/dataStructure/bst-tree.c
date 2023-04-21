
#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node *InsertNode(struct node *root,int val) {

	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = val;
	temp->left = NULL;
	temp->right = NULL;

	if(root == NULL) {
		root = temp;
	} else {
		if(root->data >= val) {
			root->left = InsertNode(root->left,val);
		} else if (root->data < val) {
			root->right = InsertNode(root->right,val);
		}
	}
	return root;
}

void displayPreOrder(struct node *root) {
	if(root == NULL) {
		printf("\nTree is Empty...\n");
	} else {
		printf("<-%d->",root->data);
		displayPreOrder(root->left);
		displayPreOrder(root->right);		
	}
}

void displayInOrder(struct node *root) {
	if(root == NULL) {
		printf("\nTree is Empty...\n");
	} else {
		displayPreOrder(root->left);
		printf("<-%d->",root->data);
		displayPreOrder(root->right);		
	}
}

void displayInOrder(struct node *root) {
	if(root == NULL) {
		printf("\nTree is Empty...\n");
	} else {
		displayPreOrder(root->left);
		displayPreOrder(root->right);		
		printf("<-%d->",root->data);
	}
}

int findMin(struct node *root) {
	if(root == NULL) {
		return -1;
	} else if(root->left == NULL) {
		return (root->data);
	} else {
		return(findMin(root->left));
	}
}

int findMax(struct node *root) {
	if(root == NULL) {
		return -1;
	} else if(root->right == NULL) {
		return (root->data);
	} else {
		return(findMax(root->right));
	}
}

int main() {



}

