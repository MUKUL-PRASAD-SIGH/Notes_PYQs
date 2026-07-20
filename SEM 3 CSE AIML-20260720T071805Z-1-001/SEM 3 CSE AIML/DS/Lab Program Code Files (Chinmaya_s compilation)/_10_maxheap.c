#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int heap[30];
int n = 0;

void insert(int item)
{
    int i;
    i = ++n;
    while ((i != 1) && (item > heap[i / 2]))
    {
        heap[i] = heap[i / 2];
        i /= 2;
    }
    heap[i] = item;
}

void pop()
{
    if (n == 0)
    {
        printf("Heap is empty\n");
    }
    else
    {
        int item = heap[1];
        int temp = heap[n--];
        int parent = 1;
        int child = 2;
        while (child <= n)
        {
            if ((child < n) && (heap[child] < heap[child + 1]))
            {
                child++;
            }
            if (temp >= heap[child])
            {
                break;
            }
            heap[parent] = heap[child];
            parent = child;
            child = child * 2;
        }
        heap[parent] = temp;
        printf("Element removed : %d\n", item);
    }
}

void display()
{
    if (n == 0)
    {
        printf("Heap is empty\n");
    }
    else
    {
        printf("\nPrinting heap elements\n");
        for (int i = 1; i <= n; i++)
        {
            printf("%d\t", heap[i]);
        }
        printf("\n");
    }
}

void main()
{
    unsigned int choice;
    int x;
    while (1)
    {
        printf("\n1:insert a node to heap \n2:delete a node from heap \n3:display the max heap\n4:exit\n");
        scanf("%u", &choice);
        switch (choice)
        {
        case 1:
            if (n == 30)
            {
                printf("Heap is full\n");
                exit(1);
            }
            printf("Enter the element to be added to heap\n");
            scanf("%d", &x); // x is the element to be pushed
            insert(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice... try again\n");
        }
    }
}
