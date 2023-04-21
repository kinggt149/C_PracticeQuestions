#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *InsertNodeBegin(struct node *tail,int val){
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = val;
	temp->next = NULL;

	if(tail == NULL) {
		tail=temp;
		tail->next = temp;
	} else {

	}
}
