#include<stdio.h>
int automatic()
{
    int c = 0;
    c++;
    return c;
}
int stat()
{
    static int count = 0;
    count++;
    return count;
}
int main(void)
{
    printf("Automatic Variable is initialized when entering the block auto() and destroyed during its exit from the block. Hence it is reinitialized as 0 at each function call.");
    printf("\n%d",automatic());
    printf("\n%d",automatic());

    printf("\nStatic Variable preserves its value even outside its scope. ");
    printf("\n%d",stat());
    printf("\n%d",stat());
}