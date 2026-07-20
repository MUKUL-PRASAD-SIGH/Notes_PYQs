#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int failure[20];

void fail(char* pat){
    int i , j;
    int n = strlen(pat);
    failure[0]=-1;
    for(j=1;j<n;j++){
        i=failure[j-1];
        while((pat[j]!=pat[i+1])&&(i>0)){
            i=failure[i];
        }
        if(pat[j]==pat[i+1]){
            failure[j]=i+1;
        }
        else{
            failure[j]=-1;
        }
    }
}
int patmatch(char * str , char * pat){
    int i = 0 , j = 0;
    int lens = strlen(str);
    int lenp = strlen(pat);
    while(i<lens && j<lenp){
        if(str[i]==pat[j]){
            i++;
            j++;
        }
        else if(j==0){
            i++;
        }
        else{
            j=failure[j-1]+1;
        }
    }
    return ((j==lenp)?(i-lenp):-1);
}

void main(){
    char str[30],pat[20];
    printf("Enter the string: ");
    scanf("%s",str);
    printf("Enter the pattern: ");
    scanf("%s",pat);
    fail(pat);
    if(patmatch(str,pat)==-1){
        printf("%s not found in %s\n",pat,str);
    }
    else{
        printf("%s found at position %d in %s\n",pat,patmatch(str,pat)+1,str);
    }
}