#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define QUEUESIZE 3

struct node{
    int data;
    struct node * link;
};

struct node * front[QUEUESIZE];
struct node * rear[QUEUESIZE];

void push(int i , int ele){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data=ele;
    temp->link=NULL;
    if(front[i]==NULL){
        front[i]=temp;
    }
    else{
        rear[i]->link=temp;
    }
    rear[i]=temp;
}

void pop(int i){
    if(front[i]){
        struct node * temp = front[i];
        front[i]=front[i]->link;
        printf("Element popped: %d\n",temp->data);
        free(temp);
    }
    else{
        printf("%dth Queue is empty\n",i);
    }
}

void display(){
    for(int i = 0;i<QUEUESIZE;i++){
        if(front[i]){
            struct node * temp = front[i];
            printf("\nPrinting %dth Queue elements\n",i);
            while(temp!=NULL){
                printf("%d\t\t",temp->data);
                temp=temp->link;
            }
        }
        else{
            printf("\n%dth Queue is Empty\n",i);
        }
    }
}

void main(){
    for(int i=0;i<QUEUESIZE;i++){
        front[i]=rear[i]=NULL;
    }
    int i , choice;
    do{
        printf("\n1:Push\n2:Pop\n3:Display\n4:Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1 : printf("Enter which queue (0-%d) and Element: ",QUEUESIZE-1);
                     int ele;
                     scanf("%d%d",&i,&ele);
                     push(i,ele);
                     break;
            case 2 : printf("From which queue (0-%d) ? : ",QUEUESIZE-1);
                     scanf("%d",&i);
                     pop(i);
                     break;
            case 3 : display();
                     break;
            case 4 : exit(0);
        }
    }while(choice!=4);
}

