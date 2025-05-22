#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace::std;

#define MAX 10
class DSA
{
	public:
	int stack[MAX], top = -1;
	
	void push(int val)
	{
    	if (top == MAX - 1)
		{
        	printf("\n Stack Overflow!");
        	return;
    	}
    	stack[++top] = val;
    	printf("\n Value pushed: %d", val);
	}

	int pop()
	{
    	if (top == -1)
		{
        	printf("\n Stack Underflow!");
        	return -1;
    	}
    	return stack[top--];
	}

	void display()
	{
    	if (top == -1)
		{
        	printf("\n Stack is empty!");
        	return;
    	}
    	printf("\n Stack elements: ");
    	for (int i = top; i >= 0; i--)
		{
        	printf("%d ", stack[i]);
    	}
	}
};

int main()
{
    int choice, value;
    DSA O;
    
    while (true)
	{
        printf("\n Stack Operations:");
        printf("\n 1. Push");
        printf("\n 2. Pop");
        printf("\n 3. Display");
        printf("\n 4. Exit");
        printf("\n Enter your choice: ");
        cin >> choice;

        switch (choice)
		{
            case 1:
                printf("\n Enter value to push: ");
                cin >> value;
                O.push(value);
                break;
            case 2:
                printf("\n Popped value: %d", O.pop());
                break;
            case 3:
                O.display();
                break;
            case 4:
                return 0;
            default:
                printf("\n Invalid choice!");
        }
    }
}