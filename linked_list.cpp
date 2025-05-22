#include <iostream>
using namespace std;
#include <conio.h>
#include <stdio.h>
#include <fstream>

int n;
struct BRICK
{
    char a;
    char* location;
    BRICK* next;  // Pointer to the next node
};

BRICK* head = NULL;  // Global head pointer for the linked list

class DAT
{
	public:
		
	void dat()
	{
    	BRICK* temp = NULL;
    	BRICK* current = NULL;
    
    	for(int i = 0; i < n; i++)
    	{
        	temp = new BRICK;
        	printf("\n Enter data : ");
        	cin >> temp->a;
        	temp->next = NULL;
        
        	if(head == NULL)
        	{
            	head = temp;
        	}
        	else
        	{
            	current = head;
            	while(current->next != NULL)
            	{
                	current = current->next;
            	}
            	
				current->next = temp;
        	}
    	}
    	printf("\n Data entered successfully! \n");
	}

	void displayList()
	{
    	BRICK* current = head;
    
    	printf("\n Displaying the linked list data: \n");
    	while(current != NULL)
    	{
        	printf(" %c ", current->a);
        	current = current->next;
    	}
    	printf("\n");
	}
};

int main()
{
	DAT O;
    printf("\n How many data to enter? \n");
    cin>>n;
    O.dat();
    
    // Display the linked list
    O.displayList();
    
    getch();
    return 0;
}