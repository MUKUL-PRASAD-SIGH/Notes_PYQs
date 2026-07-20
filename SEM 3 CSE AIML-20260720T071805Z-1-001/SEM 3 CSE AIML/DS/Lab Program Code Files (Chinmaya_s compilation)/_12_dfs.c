#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define FALSE 0
#define TRUE 1

struct node{
    int data;
    struct node * link;
};

struct node * G[20];
int visited[20];
int n;

void insert(int vi,int vj){
    struct node * p , * q = (struct node *)malloc(sizeof(struct node));
    q->data=vj;
    q->link=NULL;
    if (G[vi]==NULL){
        G[vi]=q;
    }
    else{
        p=G[vi];
        while(p->link!=NULL){
            p=p->link;
        }
        p->link=q;
    }
} 

void DFS(int i){
    struct node * temp;
    printf("%d\t",i);
    visited[i]=TRUE;
    for(temp=G[i];temp;temp=temp->link){
        if(!visited[temp->data]){
            DFS(temp->data);
        }
    }

}

void main(){
    int i,vi,vj,no_of_edges;
    printf("Enter the number of vertices: ");
    scanf("%d",&n);
    printf("Enter the total number of edges: ");
    scanf("%d",&no_of_edges);
    for(i=0;i<n;i++){
        visited[i]=FALSE;
        G[i]=NULL;
    }
    for(i=0;i<no_of_edges;i++){
        printf("Enter the edge (u v) : ");
        scanf("%d%d",&vi,&vj);
        insert(vi,vj);
    }
    printf("DFS traversal is : \n");
    DFS(0);
}