#include <stdio.h>  
#include <stdlib.h>  
  
#define MAX_SIZE 5  
  
int stack[MAX_SIZE];  
int top = -1;  
  
void push(int item) {  
    if (top == MAX_SIZE - 1) {  
        printf("Stack Overflow\n");  
        return;  
    }  
    stack[++top] = item;  
}  
  
int pop() {  
    if (top == -1) {  
        printf("Stack Underflow\n");  
        return;  
    }  
    return stack[top--];  
}  
  
int peek() {  
    if (top == -1) {  
        printf("Stack is empty\n");  
        return;  
    }  
    return stack[top];  
}  

int isEmpty() {  
    return top == -1;  
}  
  
int isFull() {  
    return top == MAX_SIZE - 1;  
}  

void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements (top to bottom):\n");
    int i;
	for(i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}
  
void main() {
	int ch,val,t,poped;
	while (1)
	{
		printf("\n****S T A C K M E N U ****\n");
		printf("1.Insert Data\n");
		printf("2.Delete Data\n");
		printf("3.Top Element\n");
		printf("4.Display Elements\n");
		printf("5.Exit\n");
		
		printf("Enter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				
				printf("Enter data to be inserted: ");
				scanf("%d",&val);
				push(val);
				break;
			case 2:
				
				poped = pop();
				printf("%d Deleted.\n",poped);
				break;
			case 3:
				
				t = peek();
				printf("Top Element: %d",t);
				break;
			case 4:
				display();
				break;
			case 5:
				exit(1);
				break;
			default:
				printf("Enter valid choice.\n");
				
		}
	}
    
      
}  
