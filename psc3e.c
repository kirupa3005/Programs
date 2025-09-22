//Profit calculator
#include<stdio.h>
int main()
{
    int costprice;
    int sellingprice;
    int profit;
    printf("Enter the cost price:");
    scanf("%d",&costprice);
    printf("Enter the selling price");
    scanf("%d",&sellingprice);
    profit=sellingprice-costprice;
    printf("Profit is : %d",profit);
    return 0;
    
}