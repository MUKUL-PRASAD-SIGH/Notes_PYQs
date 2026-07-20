#include<stdio.h>


union charshort
{
        short a;
        char b;
        char c;
};

int main(void)
{
        //Assigning to corrupt
        union charshort u1;
        u1.a = 5;
        u1.b = 'A';
        u1.c = 'a';
        printf("u1.a = %d\nu1.b = %c\nu1.c = %c\n",u1.a, u1.b, u1.c);

        //Assigning one-by-one
        u1.a = 5;
        printf("u1.a = %d\n",u1.a);
        u1.b = 'A';
        printf("u1.b = %c\n",u1.b);
        u1.c = 'a';
        printf("u1.c = %c\n",u1.c);

}

