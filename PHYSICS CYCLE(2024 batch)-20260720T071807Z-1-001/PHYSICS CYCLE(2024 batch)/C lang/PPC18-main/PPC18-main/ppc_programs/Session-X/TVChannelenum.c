#include<stdio.h>
#include<string.h>
#include<stdlib.h>

enum TV {ZEEN = 311, PIXM = 458, STRM = 445, HBOM = 447, MNPL = 451, TIMN = 341, AAST = 168, GNTV = 99, ASIA = 827, EPIC = 129};
int main(void)
{
        char sel[5];
        printf("Channels available - ZEEN, PIXM, STRM, HBOM, MNPL, TIMN, AAST, GNTV, ASIA, EPIC\nEnter your choice: ");
        fgets(sel, 5, stdin);
        printf("\n%s: ",sel);
        if(strcmp(sel,"ZEEN")==0)
                printf("%d",ZEEN);
        if(strcmp(sel,"PIXM")==0)
                printf("%d",PIXM);
        if(strcmp(sel,"STRM")==0)
                printf("%d",STRM);
        if(strcmp(sel,"HBOM")==0)
                printf("%d",HBOM);
        if(strcmp(sel,"MNPL")==0)
                printf("%d",MNPL);
        if(strcmp(sel,"TIMN")==0)
                printf("%d",TIMN);
        if(strcmp(sel,"AAST")==0)
                printf("%d",AAST);
        if(strcmp(sel,"GNTV")==0)
                printf("%d",GNTV);
        if(strcmp(sel,"ASIA")==0)
                printf("%d",ASIA);
        if(strcmp(sel,"EPIC")==0)
                printf("%d",EPIC);

}

