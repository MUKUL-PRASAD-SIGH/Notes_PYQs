#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct tree{
    struct tree * left;
    int data;
    struct tree * right;
};

struct tree * createnode(int data){
    struct tree * temp = (struct tree *)malloc(sizeof(struct tree));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

struct tree * insert ( struct tree * root, int data){
    if (root==NULL) return createnode(data);
    if (data<root->data){
        root->left=insert(root->left,data);
    }
    else if (data>root->data){
        root->right=insert(root->right,data);
    }
    return root;
}

void search(struct tree * root, int data){
    if (data==root->data){
        printf("%d found in BT\n",data);
    }
    else if (data<root->data){
        search(root->left,data);
    }
    else if (data>root->data){
        search(root->right,data);
    }
    else{
        printf("%d not found in BT\n",data);
    }
 }

 void inorder(struct tree * root){
    if(root){
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
 }

 void main(){
    int n,data;
    struct tree * root = NULL;
    printf("Enter total elements of the BT : ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&data);
        root=insert(root,data);
    }
    int key;
    printf("Enter element to be searched : ");
    scanf("%d",&key);
    search(root,key);
    printf("Inorder Traversal\n");
    inorder(root);
 }