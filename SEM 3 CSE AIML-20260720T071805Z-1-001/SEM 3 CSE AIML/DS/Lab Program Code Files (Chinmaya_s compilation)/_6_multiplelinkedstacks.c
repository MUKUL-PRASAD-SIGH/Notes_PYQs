#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node{
    int data;
    struct node * link;
};

struct node * top [3];

void push(int i,int ele){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data=ele;
    temp->link=top[i];
    top[i]=temp;
}

void pop(int i){
    if(top[i]){
        struct node * temp = top[i];
        top[i]=top[i]->link;
        printf("Element popped : %d\n",temp->data);
        free(temp);
    }
    else{
        printf("Stack underflow\n");
    }
}

void display(){
    for(int i=0;i<3;i++){
        if(top[i]){
            printf("\n\nDisplaying %dth stack contents\n\n",i);
            struct node * temp = top[i];
            while(temp!=NULL){
                printf("%d\t\t",temp->data);
                temp=temp->link;
            }
        }
        else{
            printf("\n\n%dth stack is empty\n\n",i);
        }
    }
}

void main(){
    for(int i=0;i<3;i++){
        top[i]=NULL;
    }
    int i;
    int choice;
    do{
        printf("1:Push\n2:Pop\n3:Display\n4:Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1 : printf("which stack? (0-2): ");
                     scanf("%d",&i);
                     printf("Element? : ");
                     int ele;
                     scanf("%d",&ele);
                     push(i,ele);
                     break;
            case 2 : printf("which stack? (0-2): ");
                     scanf("%d",&i);
                     pop(i);
                     break;
            case 3 : display();
                     break;
            case 4 : exit(0);
        }
    }while(choice!=4);
}