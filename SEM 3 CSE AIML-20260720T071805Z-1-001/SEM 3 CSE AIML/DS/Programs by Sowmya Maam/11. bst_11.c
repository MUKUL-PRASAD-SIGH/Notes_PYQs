#include<stdio.h>
#include<stdlib.h>

typedef struct node* treeptr;      
typedef struct node
{
	int data;
        treeptr left;
        treeptr right;
}node;

treeptr createNode(int value)
{
        treeptr newNode = malloc(sizeof(struct node));
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
}
      
      
treeptr insert(treeptr root, int data)
    {
        if (root == NULL) return createNode(data);
        if (data < root->data)
            root->left  = insert(root->left, data);
        else if (data > root->data)
            root->right = insert(root->right, data);   
     
        return root;
    }
    
void search(treeptr root, int data)
    {
        if (root == NULL) 
	{
		printf("key not found\n");
		return;
	}
        else if (data == root->data)
		printf("key found in the BST\n");
	else if (data < root->data)
            search(root->left, data);
        else if (data > root->data)
            search(root->right, data);   
    }

void inorder(treeptr root)
{
        if(root == NULL) 
		return;
	inorder(root->left);
        printf("%d ->", root->data);
        inorder(root->right);
}


int main()
{
        treeptr root = NULL;
	int key;
	char ch='y';
	while (ch == 'y')
	{
		printf("Enter a key to insert in BST\n");
		scanf("%d", &key);
		getchar();
        	root = insert(root, key);
		printf("do you wish to enter another key into BST (y/n)\n");
		scanf("%c", &ch);
	}
	
	printf("Keys in inorder traversal\n");
        inorder(root);
	printf("\n");
	printf("Enter the search Key\n");
	scanf("%d", &key);
	search(root, key);
	
}
