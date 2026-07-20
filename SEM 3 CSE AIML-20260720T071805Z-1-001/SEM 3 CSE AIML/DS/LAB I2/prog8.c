#include <stdio.h>
#include <stdlib.h>
#define MAX 5
struct QueueElement {
int data;
int isEmpty;
};
void initializeQueue(struct QueueElement queue[]);
int isFull(struct QueueElement queue[]);
int isEmpty(struct QueueElement queue[]);
void enqueue(struct QueueElement queue[], int *front, int *rear, int value);
void dequeue(struct QueueElement queue[], int *front, int *rear);
void display(struct QueueElement queue[], int front, int rear);
int main() {
struct QueueElement queue[MAX];
int front = -1, rear = -1;
int choice, value;
initializeQueue(queue);
printf("\n*** Circular Queue using Array of Structures ***\n");
while (1) {
printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter value to insert: ");
scanf("%d", &value);
enqueue(queue, &front, &rear, value);
break;
case 2:
dequeue(queue, &front, &rear);
break;
case 3:
display(queue, front, rear);
break;
case 4:printf("Exiting...\n");
exit(0);
default:
printf("Invalid choice! Try again.\n");
}
}
return 0;
}
void initializeQueue(struct QueueElement queue[]) {
for (int i = 0; i < MAX; i++) {
queue[i].isEmpty = 1;
}
}
int isFull(struct QueueElement queue[]) {
    for(int i=0;i<MAX;i++)
    {
        if(queue[i].isEmpty==1)
        return 0;
    
    }
    return 1;
}
int isEmpty(struct QueueElement queue[]) {
    
    for(int i=0;i<MAX;i++)
    {
        if(queue[i].isEmpty==0)
        return 0;
    }
return 1;
}
