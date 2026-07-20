#include <stdio.h>
#include <stdlib.h>

int front=-1;

int rear=-1;

#define MAX 5

float queue[MAX];

int Enqueue(float elem){

    if (rear==MAX-1)
    {
      printf("Queue is full"); /* code */
    }
    else{
        printf("Enqueued element: %f\n",elem);
        if(front==-1)
                {
            front=rear=0;
            queue[rear]=elem;
                }           
        else{
            queue[++rear]=elem;        
            }
    }

}
void Dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty!!\n");
        front = rear = -1;
    }
    else
    {
        printf("%.2f is dequeued\n", queue[front]);
        front++;

        if (front > rear)   // queue became empty
            front = rear = -1;
    }
}
void display()
{
    if (front == -1)
    {
        printf("Queue is empty!!\n");
    }
    else
    {
        printf("Queue elements are:\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%.2f ", queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    int choice;
    float elem;
    while (1)
    {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter element to enqueue: ");
            scanf("%f", &elem);
            Enqueue(elem);
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice!!\n");
        }
    }
    return 0;
}



