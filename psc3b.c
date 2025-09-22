#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    int divisor,dividend,quotient,remainder;
    p("Enter the divisor:");
    s("%d",&divisor);
    p("Enter the dividend:");
    s("%d",&dividend);
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    p("Quotient is : %d\n",quotient);
    p("Remainder is : %d",remainder);
    return 0;
}