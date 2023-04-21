#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int stack[SIZE];
int top=-1;

int isFull() {
	if(top == SIZE-1) 
		return 1;
	return 0;
}

int isEmpty() {
	if(top == -1)
		return 1;
	return 0;
}

void insert(int data) {
	if(isFull()) {
		printf("\nStack is overflow\n");
	} else {
		top++;
		stack[top] = data;
	}
}

void delete() {
	if(isEmpty()) {
		printf("\nStack is Underflow...\n");
	} else {
		printf("\n%d is deleted at index %d\n",stack[top],top);
		top--;
	}
}

void display() {
	if(isEmpty()) {
		printf("\nStack is Underflow...\n");
	} else {
		for(int i=0;i<=top;i++) {
			printf("<-%d->",stack[i]);
		}
	}

}

int main() {

	int ch,data;
	while(1) {
		printf("\n1.Insert element in stack\n2.Delete element from stack.\n3.display element\n4.exit.\n");
		printf("\nSelect opetion from above:");
		scanf("%d",&ch);
		printf("\n");
		switch(ch) {
			case 1:
				if(isFull()){
					printf("\nStack is overflow...\n");
				} else {
					printf("\nEnter number in stack.");
					scanf("%d",&data);
					printf("\n");
					insert(data);
				}
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			default:
				exit(1);
		}
	}
}
