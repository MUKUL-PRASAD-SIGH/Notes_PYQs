#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct cqueue{
    int size,f,r,* arr;
};

int isEmpty(struct cqueue *q){
    if(q->f==q->r){
        return 1;
    }
    return 0;
}

int isFull(struct cqueue *q){
    if((q->r+1)%(q->size)==(q->f)){
        return 1;
    }
    return 0;
}

void enqueue(struct cqueue * q,int data){
    if(isFull(q)){
        printf("Queue Overflow\n");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=data;
        printf("enqueued element : %d\n",q->arr[q->r]);
    }
}

void dequeue(struct cqueue * q){
    if(isEmpty(q)){
        printf("Queue Underflow\n");
    }
    else{
        q->f=(q->f+1)%q->size;
        printf("dequeued element : %d\n",q->arr[q->f]);
    }
}

void display(struct cqueue * q){
    int i = q->f;
    while(i!=q->r){
        i=(i+1)%q->size;
        printf("%d\t\t",q->arr[i]);
    }
}

void main(){
    struct cqueue q;
    q.size=4;
    q.f=q.r=0;
    q.arr=(int*)malloc(q.size*sizeof(int));

    enqueue(&q,12);
    enqueue(&q,12);
    enqueue(&q,12);

    dequeue(&q);
    dequeue(&q);

    enqueue(&q,1);
    enqueue(&q,2);

    display(&q);
}