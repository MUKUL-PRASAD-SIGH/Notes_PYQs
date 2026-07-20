#include<stdio.h>
double BillAmt(int units)
{
    double amt;
    if(units<=200)
    amt = units*0.8;
    else if(units>200 && units<=300)
    amt = (units-200)*0.9 + 200*0.8;
    else if(units>300)
    amt = (units-300)*1 + 100*0.9 + 200*0.8;
    amt += 100;
    if(amt>400)
    amt += 0.15*amt;
    return amt;
}
int main(void)
{
    char n[100]; int u;
    printf("Enter the name of the consumer: ");
    scanf(" %[^\n]",n);
    printf("Ener the number of units consumed: ");
    scanf(" %d",&u);

    printf("\n\t\tELECTRICITY BILL\n");
    printf("==================================\n");
    printf("Consumer name: %s",n);
    printf("\nBill amount: %lf INR",BillAmt(u));
}