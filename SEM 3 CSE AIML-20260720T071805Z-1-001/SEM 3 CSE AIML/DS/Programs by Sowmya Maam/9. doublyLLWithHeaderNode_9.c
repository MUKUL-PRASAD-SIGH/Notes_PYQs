#include<stdio.h>
#include<stdlib.h>

typedef struct node *nodePtr;
typedef struct node {
nodePtr llink;
int data;
nodePtr rlink;
}node;

nodePtr head;

void dinsert() 
{
	int n;
	nodePtr temp;
	printf("Enter the info for the new node");
	scanf("%d", &n);
	temp=(nodePtr)malloc(sizeof(node));
	temp->data=n;
    temp->llink = head; 
    temp->rlink = head->rlink; 
    head->rlink-> llink = temp; 
    head->rlink = temp;
}

void ddelete()
{
	nodePtr temp=head->rlink;
	if (head->rlink == head)
		printf("Deletion of head node not permitted.\n");
	else 
	{ 
		head->rlink = temp->rlink;
		temp->rlink->llink = head;
		printf("removing node with data %d\n",temp->data);
		free(temp);
    }
}

void displayRight()
{
	nodePtr temp;
	if (head->rlink == head)
		printf("Empty list.\n");
	else 
	{ 
		for(temp=head->rlink; temp->rlink != head; temp = temp->rlink)
			printf("%d\t", temp->data);
		printf("%d\t", temp->data);
		printf("\n\n");
	}
}

void displayLeft()
{
	nodePtr temp;
	if (head->llink == head)
		printf("Empty list.\n");
	else 
	{ 
		for(temp=head->llink; temp->llink != head; temp = temp->llink)
			printf("%d\t", temp->data);
		printf("%d\t", temp->data);
		printf("\n\n");
	}
}

int main()
{
	unsigned int choice;
	head=(nodePtr)malloc(sizeof(node));
	head->rlink=head;
	head->llink=head;
	
	while(1)
	{
		printf("1:insert a node in DLL \n2:delete a node from DLL \n3:display the DLL forward\n4:display the DLL forward\n5:exit\n");
		scanf("%u", &choice);
		switch(choice)
		{
			case 1: dinsert();
					break;
			case 2: ddelete();
					break;
			case 3: displayRight();
					break;
			case 4: displayLeft();
					break;
			case 5: exit(0);
					break;
			default: printf("Invalid choice... try again\n");
		}
	}
	return 0;
}

