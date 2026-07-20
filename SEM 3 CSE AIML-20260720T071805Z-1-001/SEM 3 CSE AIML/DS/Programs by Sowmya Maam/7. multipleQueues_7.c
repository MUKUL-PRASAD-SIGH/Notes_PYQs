#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUES 10

typedef struct node *nodePtr;
typedef struct node
{
    int data;
    nodePtr link;
}node;

nodePtr front[MAXQUEUES];
nodePtr rear[MAXQUEUES];

void push(int i, int data)
{
    nodePtr newNode = (nodePtr)malloc(sizeof(node));
    newNode->data = data;
    newNode->link =NULL;

    if(front[i]==NULL)
        front[i] = newNode;
    else
        rear[i]->link = newNode;

    rear[i] = newNode;
}

void pop(int i)
{
    if(front[i])
    {
        nodePtr temp = front[i];
        printf("Popped : %d from Queue no.%d\n", front[i]->data, i);

        front[i] = front[i]->link;
        free(temp);
    }
    else
    {
        printf("Queue no.%d is EMPTY\n", i);
    }
}

void display(int i)
{
    printf("\nQueue no.%d\n", i);
    if(front[i])
    {
        nodePtr temp = front[i];
        for(; temp!=NULL; temp = temp->link)
            printf("%5d", temp->data);
    }
    else
    {
        printf("Queue %d Empty", i);
    }
    printf("\n");
}

int main()
{
    for(int i=0;i<MAXQUEUES; i++)
    {
        front[i] = NULL;
        rear[i] = NULL;
    }

    int choice, i, data;
    printf("MENU\n1.push\n2.pop\n3.display\n4.exit\n\n\n");

    do {
        printf("choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            printf("Queue no(0-9) : ");
            scanf("%d", &i);

            printf("Element : ");
            scanf("%d", &data);

            push(i, data);
            break;

            case 2:
            printf("Queue no(0-9) : ");
            scanf("%d", &i);

            pop(i);
            break;

            case 3:
            printf("Queue no(0-9) : ");
            scanf("%d", &i);

            display(i);
            break;

            case 4:
            printf("Exit\n");
            break;

            default:printf("Invalid\n");
        }
        printf("\n");

    } while(choice!=4);

    return 0;
}
