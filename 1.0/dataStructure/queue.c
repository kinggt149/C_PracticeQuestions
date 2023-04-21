#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int Queue[SIZE];
int rear = 0;
int front = 0;

int isFull() {
	if(rear == SIZE) 
		return 1;
	return 0;
}

int isEmpty() {
	if(rear == 0) 
		return 1;
	return 0;
}

void insert(int data) {
	if(isFull()) {
		printf("\nQueue is overflow...\n");
	} else {
		Queue[rear] = data;
		rear++;
	}
}

void delete() {
	if(isEmpty()) {
		printf("\nQueue is Underflow....\n");
	} else {
		printf("\nDeleted = %d \n",Queue[front]);
		for(int i=1;i<rear;i++) {
			Queue[i-1]=Queue[i];
		}
		rear--;
	}
}

void display() {
	if(isEmpty()) {
		printf("\nQueue is Underflow....\n");
	} else {
		for(int i=front;i<rear;i++)
			printf("<-%d->",Queue[i]);
		printf("\n");
	}
}

int main() {

        int ch,data;
        while(1) {
                printf("\n1.Insert element in queue\n2.Delete element from queue.\n3.display element\n4.exit.\n");
                printf("\nSelect opetion from above:");
                scanf("%d",&ch);
                printf("\n");
                switch(ch) {
                        case 1:
                                if(isFull()){
                                        printf("\nQueue is overflow...\n");
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

