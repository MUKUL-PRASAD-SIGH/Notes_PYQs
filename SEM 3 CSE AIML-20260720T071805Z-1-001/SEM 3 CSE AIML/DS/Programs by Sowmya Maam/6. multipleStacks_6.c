#include<stdio.h>
#include<stdlib.h>

#define MAX_STACKS 3

typedef struct
{
	int key;
} ele;

typedef struct stack *stackPtr;

typedef struct stack{
	ele data;
	stackPtr link;
} stack;

stackPtr top[MAX_STACKS];

void push(int i, int item)
{
	stackPtr temp;
	temp=(stackPtr) malloc(sizeof(stack));
	temp->data.key = item;
	temp->link = top[i];
	top[i] = temp;
}

int pop(int i)
{
	stackPtr temp = top[i];
	int item;
	item = temp->data.key;
	top[i] = temp->link;
	free(temp);
	printf("Popped %d from stack %d\n", item, i);
}

void display()
{
	int i;
	stackPtr j;
     
	for(i=0;i<MAX_STACKS;i++)
	{
		printf("Stack no.%d :\n",i+1);
		if(top[i] == NULL)
           printf("Stack Empty\n--------------------\n");
        else   
		{
		   	for(j = top[i]; j != NULL ; j = j->link)
        	    printf("%d\t",j->data.key);
			printf("\n--------------------\n");
		}
    }
}


int main()
{
    int choice=4, i, j;
	ele x;    
    
    for(i=0;i<MAX_STACKS;i++)
        top[i] = NULL;
		
       
    while(1)
	{
		printf("1.push\n2.pop\n3.display\n4.exit\n");
    	printf("Enter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
				printf("Enter the stack number(0-%d) and element to be added\n",MAX_STACKS-1);
                scanf("%d%d",&i ,&x.key);//x is the element to be pushed
                push(i,x.key);
                break;

            case 2:
				printf("Enter the queue number(0-%d)\n",MAX_STACKS-1);
                scanf("%d",&i);
                if(top[i] == NULL)
                    printf("Queue Empty\n");
                else
                    pop(i);
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);
                break;

            default :
                printf("Invalid Choice");
        }
	}
    return 0;
}

