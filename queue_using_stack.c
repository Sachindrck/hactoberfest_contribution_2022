#include<stdio.h>
#include<stdlib.h>
# define N 20 //defining the size of queue
int s[N],top = -1;
int pop()//function to remove an element from stack
{
	return s[top--];
}
void push(int x)//function to insert an element into stack
{
	if(top == N-1)
		printf("Stack is Full");
	else
	{
		top++;
		s[top] = x;	
	}
}
void enqueue(int x)//function to insert element in the queue using recursive stack call
{
	push(x);
}
void print()//function to print elements of a queue
{
	int i;
	for(i=0;i<=top;i++)
		printf("\n%d",s[i]);
}

int dequeue()//function to dequeue element from a queue using recursive stack call
{	
	int data,res;
	if(top == -1)
		printf("Queue is Empty");
	else if(top == 0)
		return pop();
	data = pop();
	res = dequeue();
	push(data);
	return res;
 	
}
int main()
{
	int opt,n,i,data,t;
	printf("Enter Your Choice:-");
	
	do{
		printf("\n\n1 for Insert the Data in Queue\n2 for show the Data in Queue \n3 for Delete the data from the Queue\n0 for Exit\n");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				printf("\nEnter the number of elements:");
				scanf("%d",&n);
				printf("\nEnter your data\n");
				i=0;
				while(i<n){
					scanf("%d",&data);
					enqueue(data);
					i++;
				}
				break;
			case 2:
				print();
				break;
			case 3:
				t = dequeue();
				printf("Dequeued element:%d",t);
				
				break;
			case 0:
				break;
			default:
				printf("\nIncorrect Choice");
			
		}
	}while(opt!=0);
	
}