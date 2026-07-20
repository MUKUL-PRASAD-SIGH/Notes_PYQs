#include<stdio.h>
#include<stdlib.h>

int *queue;
int front, rear, capacity;

int pop()
{
    front = (front+1)%capacity;
    return queue[front];
}

int push(int data)
{
    int *newQueue, i;
    if( (rear+1)%capacity ==front%capacity )
    {
        printf("Extending Queue (new capacity=%d)\n", 2*capacity);
        newQueue = (int*)malloc(capacity * 2 * sizeof(int));

        for(i=1;front!=rear;i++)
        {
            newQueue[i] = pop();
        }

        rear = i-1;
        front = 0;
        capacity *= 2;
        free(queue);
        queue = newQueue;
    }

    rear = (rear+1)%capacity;
    queue[rear] = data;
}


void display()
{
    printf("Elements:\n");
    if(front == rear)
    {
        printf("Queue Empty\n");
    }
    for(int i=(front+1)%capacity ; i!= (rear+1)%capacity ; i = (i+1)%capacity)
    {
        printf("%d\n", queue[i]);
    }
}

int main()
{
    front = 0;
    rear = 0;
    capacity = 2;
    queue = (int*)malloc(capacity* sizeof(int));

        int choice =4;
        int num;
    	

    	do{
		printf("1.push\n2.pop.\n3.display\n4.exit\n");
    		scanf("%d",&choice);

    		switch(choice)
    		{
    			case 1:
    			scanf("%d",&num);
    			push(num);
    			break;

    			case 2:
                if(front==rear)
                    printf("Queue Empty\n");
                else
    		        printf("element removed is %d\n",pop());
    			break;

    			case 3:
    			display();
    			break;

    			case 4:
    			break;

    			default : printf("Invalid Entry\n");
    		}
            printf("\n");
    	}while(choice!=4);

    return 0;
}
