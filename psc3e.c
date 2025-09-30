#include <stdio.h>

int main() 
{
    float costPrice, sellingPrice, profit, loss;

    printf("Enter Cost Price : ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price : ");
    scanf("%f", &sellingPrice);

    
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("\n--- Result ---\n");
        printf("Profit = %f\n", profit);
    } 
    else if  (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        printf("\n--- Result ---\n");
        printf("Loss = %f\n", loss);
    
    }

    return 0;
}