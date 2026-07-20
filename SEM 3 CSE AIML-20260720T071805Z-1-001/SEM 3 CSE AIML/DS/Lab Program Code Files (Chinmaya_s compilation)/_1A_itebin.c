#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define compare(a,b) ((a<b)?-1:(a==b)?0:1)

int binsearch(int a[],int n,int key){
    int middle;
    int high = n-1;
    int low = 0;
    while(low<=high){
        middle=(high+low)/2;
        switch(compare(a[middle],key)){
            case -1 : low = middle + 1;
                      break;
            case 0 : return middle;
            case 1 : high = middle - 1;
                      break;
        }
    }
    return -1;
}

void main(){
    int n;
    printf("Enter the total number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements in increasing order - \n");
    for(int i=0;i<n;i++){
        printf("Enter element %d\n",i+1);
        scanf("%d",&a[i]);
    }
    int key;
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    if(binsearch(a,n,key)==-1){
        printf("Element not found.\n");
    }
    else{
        printf("element %d found at position %d\n",key,binsearch(a,n,key)+1);
    }
}