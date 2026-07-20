#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node
{
    struct node * llink;
    int data;
    struct node * rlink;
};

struct node * head;

void insert()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be inserted: ");
    scanf("%d", &temp->data);
    temp->llink = head;
    temp->rlink = head->rlink;
    head->rlink->llink = temp;
    head->rlink = temp;
}

void delete()
{
    if (head->rlink == head)
    {
        printf("DLL is empty\n");
    }
    else
    {
        struct node *temp = head->rlink;
        head->rlink = temp->rlink;
        temp->llink = head;
        printf("Element deleted : %d\n", temp->data);
        free(temp);
    }
}

void displayright()
{
    if (head->rlink == head)
    {
        printf("DLL is empty\n");
    }
    else
    {
        struct node *temp = head->rlink;
        printf("\n DISPLAYING FORWARD\n");
        while (temp!= head)
        {
            printf("%d\t\t", temp->data);
            temp = temp->rlink;
        }
    }
}

void displayleft()
{
    if (head->llink == head)
    {
        printf("DLL is empty\n");
    }
    else
    {
        struct node *temp = head->llink;
        printf("\n DISPLAYING BACKWARD\n");
        while (temp!= head)
        {
            printf("%d\t\t", temp->data);
            temp = temp->llink;
        }
    }
}

int main()
{
    head=(struct node *)malloc(sizeof(struct node));
    head->llink = head;
    head->rlink = head;
    int choice;
    do
    {
        printf("\n\n1:Insert\n2:Delete\n3:Display Forward\n4:Display Backard\n5:Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            displayright();
            break;
        case 4:
            displayleft();
            break;
        case 5:
            exit(0);
            break;
        }
    } while (choice != 5);
    return 0;
}